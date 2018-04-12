#include <msp430.h>
#include <stdint.h>




#define PREAMBLE    0xAA
#define FW_VER      0x02
#define TRUE        1
#define FALSE       0

#define MAX_BUFFER_SIZE     10

unsigned int txData;                        // UART internal variable for TX
unsigned char rxBuffer;                     // Received UART character


//------------------------------------------------------------------------------
// Custom Defined Bits
//------------------------------------------------------------------------------
#define MOSI_BIT  BIT2 // P1
#define MISO_BIT  BIT1 // P1
#define CS_BIT    BIT5 // P1
#define SCL_BIT    BIT4 // P1

#define ADC_BIT    BIT0 // P1
#define numThresh   32 //num of thresholds to try
#define numHist   16
#define PtoP  600 //peak-to-peak interval assumed
void init_SPI_Slave(void);

uint8_t TransmitBuffer[MAX_BUFFER_SIZE] = {0};
uint8_t ReceiveBuffer[MAX_BUFFER_SIZE] = {0};
uint8_t TXByteCtr = 0;
uint8_t TransmitIndex = 0;




__inline__ void SendUCB0Data(uint8_t val)
{
    //while (!(IFG2 & UCB0TXIFG));              // USCI_B0 TX buffer ready?
    UCB0TXBUF = val;
}
__inline__ uint8_t rocky100_is_idle()
{
    if (P2IN & BIT5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


unsigned short lpm_status;
void mcu_lpm_enter(uint16_t level)
{
    switch (level)
    {
    case 0:
        lpm_status = LPM0_bits;
        break;
    case 1:
        lpm_status = LPM1_bits;
        break;
    case 2:
        lpm_status = LPM2_bits;
        break;
    case 3:
        lpm_status = LPM3_bits;
        break;
    case 4:
        lpm_status = LPM4_bits;
        break;
    }
    __bis_SR_register(lpm_status);
    __no_operation();
}

volatile uint8_t rocky_transaction_ended;
volatile uint8_t rocky_transaction_started;

void updateRockyRegister(uint8_t reg, uint16_t value) {
    TransmitBuffer[0] = 0x0C; //Write one register to USER memory space //0x8C for Read
    TransmitBuffer[1] = reg;
    TransmitBuffer[2] = value >> 8;
    TransmitBuffer[3] = value;
    TransmitBuffer[4] = 0x00;
    TXByteCtr = 5;
    TransmitIndex = 0;

    P2OUT &= ~(BIT5);

    SendUCB0Data(TransmitBuffer[TransmitIndex++]);
    TXByteCtr--;

    UCB0CTL1 &= ~UCSWRST;                     // **Initialize USCI state machine**
    IE2 |= UCB0RXIE;                          // Enable USCI0 RX interrupt

}

volatile char phaseFlag = 0;




//------------------------------------------------------------------------------
// Function prototypes & Variables
//------------------------------------------------------------------------------
void TimerA_UART_init(void);
void TimerA_UART_tx(unsigned char byte);
void TimerA_UART_print(char *string);

int hist[numHist] = {0};

char histBufferIdx = 0;

int avgHistory[18] = {0};

char avgBufferIdx = 0;

int sample_average;

char healthy = 1; // set initially to healthy

char newdataflag = 0; // new data flag for SPI bus

int detection_output; // output of the detection algorithm

char trainingflag = 1;

int max_deviation = 0; //max value of data learned

int thresh = 0;  //threshold learned

int noiselvl = 0; //noise level learned

int noiseHistory[20] = {0};

unsigned int lastPI = 0; //last peak index detected

char fall_flag = 0;

int prev = 0;

int countPeak[numThresh+1] = {0};

char findPeak = 0; //flag to find peak index


char findEnd = 0;  //flag to find end index


int minthresh;
int maxthresh;

int r_foo[numThresh] = {0};

int th;
char i;


int count = 0;

volatile unsigned int timeval;
volatile unsigned int subtimeval;
volatile uint8_t sample_ready;

unsigned int peakInd[5] = {0};
unsigned int startInd[5] = {0};
unsigned int endInd[5] = {0};
char idx = 0;

int max_th;
int min_th;
int temp;
int step;
int height[numThresh] = {0};


void HeightLearning(int curr, int min_th, int step);
void NoiseLvlLearning(int data);
void detection(int data);
char updateBufferIdx(char size, char head);
void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
int computeAverage(void);
void maxThreshMinThreshLearning(void);
void calcMaxAndMinThreshold(void);

volatile int sample_not_processed;




int tx_skip= 0;
int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

  ADC10CTL0 = ADC10SR + ADC10ON + ADC10IE; // + ADC10SHT_1 // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)

  ADC10CTL1 = INCH_0 + ADC10DF;//+ ADC10SSEL_1;   //                     // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
  ADC10AE0 |= BIT0;                         // PA.4 ADC option select

  P2DIR |= BIT5; //CS
  P2DIR |= BIT4 + BIT2;
  P2SEL &= ~(BIT5);
  P2SEL2 &= ~(BIT5);
  P2OUT |= BIT5 + BIT2;

  TACCTL0 = CCIE;                             // CCR0 interrupt enabled
  TACCR0 = 32;
  TACTL = TASSEL_1 + MC_1;                  // ACLK, upmode

  P1SEL = BIT5 + BIT6 + BIT7;
  P1SEL2 = BIT5 + BIT6 + BIT7;
  UCB0CTL1 = UCSWRST;                       // **Put state machine in reset**
  UCB0CTL0 |= UCCKPL + UCSYNC + UCMSB + UCMST; //      // 3-pin, 8-bit SPI master, SCL starts low and data is pushed out on positive edges
  UCB0CTL1 |= UCSSEL1; //SMCLK (UCSSEL0 is ACLK)
  BCSCTL2 |= DIVS_1;
  //UCB0CTL1 &= ~UCSWRST;                     // **Initialize USCI state machine**
  //IE2 |= UCB0RXIE;                          // Enable USCI0 RX interrupt

  rocky_transaction_ended = 0;
  rocky_transaction_started = 0;
  sample_ready = 0;
  timeval = 0;

  TransmitBuffer[0] = PREAMBLE; // Read one register from USER memory space
  TransmitBuffer[1] = FW_VER; // Address to read
  TransmitBuffer[2] = 0x13; //Dummy data
  TransmitBuffer[3] = 0x45;
  TransmitBuffer[4] = 0x55;
  TransmitBuffer[5] = 0x65;



    __bis_SR_register(GIE);       // enable interrupts

     timeval = 0;
     noiselvl = 0;

    int phaseflag2flag = 1;
    int phaseflag3flag = 1;
    int phaseflag1flag = 1;


    while(1){
      if (sample_ready) {
        P2OUT |= BIT4;
        sample_ready = 0;
        int16_t sample = ADC10MEM;
        hist[histBufferIdx] = sample; // update the history buffer
        histBufferIdx = updateBufferIdx(numHist, histBufferIdx);


        // PHASE 0 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        if (phaseFlag == 0) {
          if (subtimeval == 16) {
            subtimeval = 0;
            // calculate the average value
            int currentAvg = 0;
            for (i=0; i < numHist; i++) {
              currentAvg += hist[i];
            }
            currentAvg = currentAvg >> 4; // divide by 16.
            avgHistory[avgBufferIdx] = currentAvg;
            avgBufferIdx = updateBufferIdx(18, avgBufferIdx);
          }
        }
        // PHASE 1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        else if (phaseFlag == 1){
          // compute the average
          // first, compute the average from the history data:
            if (phaseflag1flag) {
                sample_average = computeAverage();
                phaseflag1flag = 0;
            }
           // get the absolute max value of the sample.
          if ((abs(sample - sample_average) > max_deviation)) {
            max_deviation = abs(sample - sample_average);
          }
        }
        // PHASE 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        else if (phaseFlag == 2){
          sample = sample - sample_average;
          if (phaseflag2flag) {
            calcMaxAndMinThreshold();
            phaseflag2flag = 0; // no longer calculate these things.
          }
          HeightLearning(sample, min_th, step);
        }
        // PHASE 3 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        else if (phaseFlag == 3){
          sample = sample - sample_average;
          if (phaseflag3flag) {
            maxThreshMinThreshLearning();
            phaseflag3flag = 0;
          }
          NoiseLvlLearning(sample);
        }
        else if (phaseFlag == 4) {
          sample = sample - sample_average;
          detection(sample);

          if (timeval > lastPI + 600) {
            // Over 400ms since the last peak
            // UNHEALTHY
            // P2OUT &= ~BIT2;
            if (healthy) {
              newdataflag = 1;
            }
          healthy = 0;
          } else {
            // P2OUT |= BIT2;
            if(!healthy) {
              newdataflag = 1;
              // Temporary Pacing Decision
            }
            healthy = 1;
          }
          if (newdataflag) { // update Rocky Register if the new data flag is activated
            newdataflag = 0;
            updateRockyRegister(0x30,healthy);
          }
        } else { // Some error shifted the phaseFlag incorrectly.
          break;
          //error!!
        }
          // End Algorithm


        P2OUT &= ~BIT4;
      }

      if (rocky100_is_idle()) { // this is a bit comfusing. Don't worry about it
        // P2OUT |= BIT4;
        mcu_lpm_enter(3);//LPM3 keeps ACLK running
      }
      else
      {
        // P2OUT &= ~BIT4; // TOGGLE P2.4
        mcu_lpm_enter(0);
    }
  }
}


// Timer A0 interrupt service routine
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=TIMER0_A0_VECTOR
__interrupt void Timer_A (void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(TIMER0_A0_VECTOR))) Timer_A (void)
#else
#error Compiler not supported!
#endif
{
  //P1IFG &= ~BIT3;                           // P1.3 IFG cleared
  //P2OUT ^= 0xFF;
  ADC10CTL0 |= ENC + ADC10SC;             // Sampling and conversion start
  if (trainingflag) {
    if (timeval == 0) {
      // wait till 16 so that histBuffer is filled
      phaseFlag = 0;
    } else if (timeval == 2500){
      phaseFlag = 1;
    } else if (timeval == 5000){
      phaseFlag = 2;
    } else if (timeval == 10000){
      phaseFlag = 3;
    } else if (timeval == 20000){
      trainingflag = 0;
    }
  } else {
    phaseFlag = 4;
      if (timeval > 60000) {
          timeval = 0;
          lastPI = 0;
          findPeak = 0;
          findEnd = 0;
      }
  }
  timeval++;
  subtimeval++;
}

// ADC10 interrupt service routine
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(ADC10_VECTOR))) ADC10_ISR (void)
#else
#error Compiler not supported!
#endif
{
  //__bic_SR_register_on_exit(CPUOFF);        // Clear CPUOFF bit from 0(SR)

    // Exit low power mode
    sample_ready = 1;
    _BIC_SR_IRQ(lpm_status);
}

#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR (void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USCIAB0RX_VECTOR))) USCI0RX_ISR (void)
#else
#error Compiler not supported!
#endif
{
   ReceiveBuffer[TransmitIndex-1] = UCB0RXBUF;
   if (TXByteCtr)
   {
     //SendUCB0Data(TransmitBuffer[TransmitIndex++]);
     UCB0TXBUF = TransmitBuffer[TransmitIndex++];
     TXByteCtr--;
   } else {
       //while ()
       P2OUT |= BIT5; //deactivate CS
   }
}





//------------------------------------------------------------------------------
// Interrupt Service Routines
//------------------------------------------------------------------------------

// Port 2 interrupt service routine
// This is used to clear out stuff and reset everything.
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(PORT1_VECTOR))) Port_1 (void)
#else
#error Compiler not supported!
#endif
{
    // Clear interrupt flag
    P1IFG &= ~BIT3;                           // P1.3 IFG cleared
    P1OUT ^= BIT7;
    // Trigger new measurement
}


//------------------------------------------------------------------------------
// Subfunctions for node struct
//------------------------------------------------------------------------------

// void HeightLearning(int curr, int min_th, int step) {

//   if ((curr < prev) && (prev > min_th) && (fall_flag == 0)) {

//     countPeak[0]++;
//     th = min_th;
//     fall_flag = 1;
//     // increases the threshold by steps
//     // the countPeak vector has the number of peaks
//     // found at each step over the time HeightLearning is run
//     for (i=1; i<(numThresh+1); i++) {
//       th += step;
//       if (prev > th) {
//         countPeak[i] ++;
//       }
//       else {
//         break;
//       }
//     }
//   }

//   if ((fall_flag == 1) && (curr > prev)){
//     fall_flag = 0;
//   }

//   prev = curr;
// }


// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
    int j;
    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int computeAverage() {
  quickSort(avgHistory, 0, 17);
  int avg = 0;
  for (i=0; i < numHist; i++) {
    // only do a for loop of 16 to get rid of 2 highest averages
    avg += avgHistory[i];
  }
  avg = avg >> 4;
  return avg;
}



void HeightLearning(int curr, int min_th, int step) {
  int i;
  if (abs(curr) < abs(prev) && (abs(prev) > abs(min_th)) && (fall_flag == 0)) {
    // Signal is falling but above the minimum threshold
    countPeak[0]++;
    th = min_th;
    fall_flag = 1;
    for (i=1; i < numThresh + 1; i++) {
      th += step; 
      if (abs(prev) > th) {
        // previous value still above min threshold
        countPeak[i]++;
      } else {
        break;
      }
    }
  }

  if ( (fall_flag == 1) && (abs(curr) > abs(prev)) ){
    fall_flag = 0;
  }

  prev = curr;
}


void maxThreshMinThreshLearning() {
  int j;
  int i;
  // r_foo has the differences between number of peaks in
  // each threshold
  for (i=0; i<(numThresh); i++) {
    r_foo[i] = countPeak[i+1] - countPeak[i];
  }
  th = min_th;
  for (i=0; i<(numThresh); i++) {
    th += step;
    // if there wasn't a big difference in the peak counts...
    if (r_foo[i] < 10){
      // set the height vector to be that threshold.
      height[i] = th;
    }
  }

  for (i=numThresh-1; i>=0; i--) {
    // going from top to bottom of the signal
    if (r_foo[i] == 0){
      // if there was no difference between two thresholds
      maxthresh = height[i]; // set that as the max threshold
      for (j=i-1; j>=0;j--) {
        // go down from the maxthresh till you find the minthresh.
        if (r_foo[j] != 0) {
          minthresh = height[j];
          break;
        }
      }
      break;
    }
  }
  thresh = (abs(maxthresh + minthresh) >> 1) + (abs(maxthresh + minthresh) >> 3); // divide by 2
  // thresh = division((maxthresh + minthresh),2);
}

void calcMaxAndMinThreshold() {
  max_th = (max_deviation >> 1); // divide by two
  // max_th = division(max_val, 2);
  min_th = (max_deviation >> 2); // divide by 4;
  // min_th = division(max_val, 4);
  temp = abs(max_th - min_th);
  step = temp >> 6; // divde by 32
  // step = division(temp, numThresh);
}

void NoiseLvlLearning(int data) {
  if ((abs(data) < (minthresh >> 1)) && (abs(data) > noiselvl)) {
    noiselvl = abs(data);
  }
}

void detection(int data) {
    // Find the beginning of a peak
    if ((abs(data) < thresh) && (abs(data) > noiselvl) && (timeval > lastPI + PtoP) && (findEnd == 0) && (findPeak == 0)) {
            if (idx < 5) {
                startInd[idx] = timeval;
            }
            findPeak = 1;
    }

    // Find the peak
    else if ((abs(data) > thresh) && (findPeak == 1) && (findEnd == 0)) {

        if (idx < 5) {
            peakInd[idx] = timeval;
        }
        lastPI = timeval;
        P2OUT ^= BIT2;
        findEnd = 1;
        findPeak = 0;
    }

    // Find the end of a peak
    else if ((abs(data) < noiselvl) && (timeval > lastPI + 80) && (findEnd == 1) && (findPeak == 0)) {
        if (idx < 5) {
            endInd[idx] = timeval;
        }
        findEnd = 0;
        idx++;
    }
}

char updateBufferIdx(char size, char head) {
   // manipulates buffer by updating head value
   // then adding in new value for buffer head
   head++;
   if (head >= size) {
      // wrap the head pointer around array
      head = head - size;
   }
   return head;
}

