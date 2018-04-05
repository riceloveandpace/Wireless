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
#define numThresh   20 //num of thresholds to try
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

volatile char phaseFlag = 1;




//------------------------------------------------------------------------------
// Function prototypes & Variables
//------------------------------------------------------------------------------
void TimerA_UART_init(void);
void TimerA_UART_tx(unsigned char byte);
void TimerA_UART_print(char *string);

char healthy = 1; // set initially to healthy

char newdataflag = 0; // new data flag for SPI bus

int detection_output; // output of the detection algorithm

char trainingflag;

int flip = 0;

int max_val = 0; //max value of data learned

int thresh = 0;  //threshold learned

int noiselvl = 0; //noise level learned

unsigned int lastPI = 0; //last peak index detected

char fall_flag = 0;

int prev = 0;

int countPeak[numThresh+1] = {0};

char findPeak = 0; //flag to find peak index


char findEnd = 0;  //flag to find end index


int minthresh;
int maxthresh;

int r[numThresh] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

int th;
char i;


int count = 0;

volatile unsigned int timeval;
volatile uint8_t sample_ready;

unsigned int peakInd[5] = {0};
unsigned int startInd[5] = {0};
unsigned int endInd[5] = {0};
char idx = 0;


void HeightLearning(int curr, int min_th, int step);
void NoiseLvlLearning(int data);

int detection(int data);

void diff(int data[]);
int division(int a, int b);

volatile int sample_not_processed;




int tx_skip= 0;
int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

  ADC10CTL0 = ADC10SR + ADC10ON + ADC10IE; // + ADC10SHT_1 // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)

  ADC10CTL1 = INCH_4 + ADC10DF;//+ ADC10SSEL_1;   //                     // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
  ADC10AE0 |= BIT4;                         // PA.4 ADC option select

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

    while(1){
      if (sample_ready) {
        sample_ready = 0;
        int16_t sample = ADC10MEM;
        if (flip) {
          sample = -sample;
        }

        if (phaseFlag == 1){
          if ((abs(sample) > abs(max_val)) && (abs(sample) > 0)) {
            max_val = sample;
            if (max_val < 0) { 
              flip = 1;
              max_val = abs(max_val);
            }
          }
        }
        else if (phaseFlag == 2){
          int max_th = division(max_val, 2);
          int min_th = division(max_val, 4);
          int temp = max_th - min_th;
          int step = division(temp, numThresh);

          HeightLearning(sample, min_th, step);


          int height[numThresh] = {0};
          int j;
          diff(countPeak);

          th = min_th;



          for (i=1; i<(numThresh+1); i++) {
            th += step;
            if (r[i-1] < 10){
              height[i-1] = th;
            }
          }

          for (i= numThresh-1; i>=0; i--) {
            if (r[i] == 0){
              maxthresh = height[i];
              for (j=i-1; j>=0;j--) {
                if (r[j] != 0) {
                  minthresh = height[j];
                  break;
                }
              }
              break;
            }
          }
          thresh = division((maxthresh + minthresh),2);
        }
        else if (phaseFlag == 3){
          NoiseLvlLearning(sample);
        }
        else if (phaseFlag == 4) {
          detection_output = detection(sample);

          if (timeval > lastPI + 600) {
            // Over 400ms since the last peak.
            // P2OUT |= BIT2;
            if(!healthy) {
              newdataflag = 1;
              // Temporary Pacing Decision
            }
            healthy = 1;
          } else {
            // P2OUT &= ~BIT2;
            if (healthy) {
              newdataflag = 1;
            }
          healthy = 0;
          }
        } else { // Some error shifted the phaseFlag incorrectly.
          break;
          //error!!
        }
          // End Algorithm

        if (newdataflag) { // update Rocky Register if the new data flag is activated
          newdataflag = 0;
          updateRockyRegister(0x30,healthy);
        }
        P2OUT &= ~BIT4;
      }

      if (rocky100_is_idle()) { // this is a bit comfusing. Don't worry about it
        P2OUT |= BIT4;
        mcu_lpm_enter(3);//LPM3 keeps ACLK running
      }
      else
      {
        P2OUT &= ~BIT4; // TOGGLE P2.4
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
    if (timeval == 0){
      phaseFlag = 1;
    } else if (timeval == 5000){
      phaseFlag = 2;
    } else if (timeval == 10000){
      phaseFlag = 3;
      trainingflag = 0;
    }
  } else {
    phaseFlag = 4;
  }
  timeval++;
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


void HeightLearning(int curr, int min_th, int step) {

  if ((curr < prev) && (prev > min_th) && (fall_flag == 0)) {

    countPeak[0]++;
    th = min_th;
    fall_flag = 1;

    for (i=1; i<(numThresh+1); i++) {
      th += step;
      if (prev > th) {
        countPeak[i] ++;
      }
      else {
        break;
      }
    }
  }

  if ((fall_flag == 1) && (curr > prev)){
    fall_flag = 0;
  }

  prev = curr;
}

void NoiseLvlLearning(int data) {
  if ((data < minthresh) && (data > noiselvl)) {
    noiselvl = data;
  }

}

int detection(int data) {
    // Find the beginning of a peak
    if ((abs(data) < thresh) && (abs(data) > noiselvl) && (timeval > lastPI + PtoP) && (findEnd == 0) && (findPeak == 0)) {
            if (idx < 5) {
                startInd[idx] = timeval;
            }
            findPeak = 1;
    }

    // Find the peak
    else if ((data > thresh) && (findPeak == 1) && (findEnd == 0)) {

        if (idx < 5) {
            peakInd[idx] = timeval;
        }
        lastPI = timeval;
        findEnd = 1;
        findPeak = 0;
        P2OUT ^= BIT2;
    }

    // Find the end of a peak
    else if ((abs(data) < noiselvl) && (timeval > lastPI + 80) && (findEnd == 1) && (findPeak == 0)) {
        if (idx < 5) {
            endInd[idx] = timeval;
        }
        findEnd = 0;
        idx++;
    } else {
      // No peak detected
      return FALSE;
    }

    return TRUE;

}

int division(int a, int b) {


  int countD = 0;
  int temp = a;

  if (a == 0) {
    return 0;
  }
  else if (b == 0) {
    return -1;
  }
  else {
    while (temp >= b) {
      temp = temp - b;
      countD++;
    }
    return countD;
  }
}


void diff(int data[]){

  for (i=0; i<(numThresh); i++) {
    r[i] = data[i+1] - data[i];
  }
}

