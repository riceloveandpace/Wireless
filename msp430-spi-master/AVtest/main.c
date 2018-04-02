#include <msp430.h>
#include <stdint.h>
#include <stdlib.h>

#define MOSI_BIT  BIT2 // P1
#define MISO_BIT  BIT1 // P1
#define CS_BIT    BIT5 // P1
#define SCL_BIT    BIT4 // P1

#define ADC_BIT    BIT0 // P1
#define numThresh   20 //num of thresholds to try
#define PtoP  600 //peak-to-peak interval assumed
void init_SPI_Slave(void);

//******************************************************************************
//  MSP430G2x32/G2x52 Demo - ADC10, Sample A1, AVcc Ref, Set P1.0 if > 0.5*AVcc
//
//  Description: A single sample is made on A1 with reference to AVcc.
//  Software sets ADC10SC to start sample and conversion - ADC10SC
//  automatically cleared at EOC. ADC10 internal oscillator times sample (16x)
//  and conversion. In Mainloop MSP430 waits in LPM0 to save power until ADC10
//  conversion complete, ADC10_ISR will force exit from LPM0 in Mainloop on
//  reti. If A1 > 0.5*AVcc, P1.0 set, else reset.
//
//                MSP430G2x32/G2x52
//             -----------------
//         /|\|              XIN|-
//          | |                 |
//          --|RST          XOUT|-
//            |                 |
//        >---|P1.4/A4      P1.0|-->LED
//
//  D. Dang
//  Texas Instruments Inc.
//  December 2010
//  Built with CCS Version 4.2.0 and IAR Embedded Workbench Version: 5.10
//******************************************************************************

//------------------------------------------------------------------------------
// Hardware-related definitions
//------------------------------------------------------------------------------
#define UART_TXD   0x02                     // TXD on P1.1 (Timer0_A.OUT0)
#define UART_RXD   0x04                     // RXD on P1.2 (Timer0_A.CCI1A)

//------------------------------------------------------------------------------
// Conditions for 9600 Baud SW UART, SMCLK = 1MHz
//------------------------------------------------------------------------------
#define UART_TBIT_DIV_2     (1000000 / (9600 * 2))
#define UART_TBIT           (1000000 / 9600)

//------------------------------------------------------------------------------
// Global variables used for full-duplex UART communication
//------------------------------------------------------------------------------
unsigned int txData;                        // UART internal variable for TX
unsigned char rxBuffer;                     // Received UART character

//------------------------------------------------------------------------------
// Function prototypes
//------------------------------------------------------------------------------
void TimerA_UART_init(void);
void TimerA_UART_tx(unsigned char byte);
void TimerA_UART_print(char *string);

/*
 * main.c
 */
//declare parameters for learning

int max_val = 0; //max value of data learned

int thresh = 0;  //threshold learned

int noiselvl = 0; //noise level learned

unsigned int lastPI = 0; //last peak index detected

char fall_flag = 0;

int prev = 0;

int countPeak[numThresh+1] = {0};

char findPeak = 0; //flag to find peak index


char findEnd = 0;  //flag to find end index

char phaseFlag = 1;

int minthresh;
int maxthresh;

int r[numThresh] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

int th;
char i;


int count = 0;

int data_in;
int a;
volatile unsigned int timeval = 0;
volatile uint8_t sample_ready;

unsigned int peakInd[5] = {0};
unsigned int startInd[5] = {0};
unsigned int endInd[5] = {0};
char idx = 0;


void HeightLearning(int curr, int min_th, int step);
void NoiseLvlLearning(int data);

void detection(int data);

void diff(int data[]);
int division(int a, int b);

volatile int sample_not_processed;

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

     BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

     ADC10CTL0 = ADC10SHT_1 + ADC10SR + ADC10ON + ADC10IE; // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)
     ADC10CTL1 = INCH_4 + ADC10DF + ADC10SSEL_1;                       // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
     ADC10AE0 |= BIT4;                         // PA.4 ADC option select
     P1DIR = 0xFF & ~(CS_BIT + SCL_BIT + MOSI_BIT + BIT0 + BIT3 + BIT4);               // Set all pins but RXD and A4 to output


     P1IE |=  BIT3;                            // P1.3 interrupt enabled
     P1IES &= ~BIT3;                            // P1.3 Hi/lo edge
     P1REN |= BIT3;              // Enable Pull Up on SW2 (P1.3)
     P1IFG &= ~BIT3;                           // P1.3 IFG cleared
                         //BIT3 on Port 1 can be used as Switch2

     P1OUT |=  MISO_BIT;
     P1OUT &= ~ADC_BIT;

     P2DIR = 0xFF & ~(BIT0);
     P2OUT =  0;
     //P2SEL =
     // P2IE |=  BIT0;                            // P2.0 interrupt enabled
      // P2IES |= BIT0;                            // P2.0 Hi/lo edge
      // P2REN |= BIT0;              // Enable Pull Up on SW2 (P2.0)

       //P2IFG &= ~BIT0;                           // P2.0 IFG cleared

     TACCTL0 = CCIE;                             // CCR0 interrupt enabled
     TACCR0 = 32;
     TACTL = TASSEL_1 + MC_1;                  // ACLK, upmode

     __bis_SR_register(GIE);


     //__bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
     sample_ready = 0;
     timeval = 0;
     noiselvl = 0;

     while (phaseFlag == 1){
       //sample_not_processed = 0;

       //if (sample_not_processed) {
           //__bic_SR_register(GIE);
       //}
       while (!sample_ready);
       sample_ready = 0;
       data_in = ADC10MEM;

       if ((data_in > max_val) && (data_in > 0)) {
         max_val = data_in;
       }
     }


     int max_th = division(max_val, 2);
     int min_th = division(max_val, 4);
     int temp = max_th - min_th;
     int step = division(temp, numThresh);

     while (phaseFlag == 2){
        // if (sample_not_processed) {
             //__bic_SR_register(GIE);
        // }
         while (!sample_ready);
         sample_ready = 0;
         data_in = ADC10MEM;
        HeightLearning(data_in, min_th, step);
      }

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


     /*
     for (i=1; i<(numThresh+1); i++) {

       th += step;

       if (r[i-1] < 10){

         height[i-1] = th;

       }
     }

     for (i=0; i<numThresh; i++) {

       if (r[i] == 0){
         minthresh = height[i];
         break;
       }
     }


     for (i= numThresh-1; i>=0; i--) {

       if (r[i] == 0){
         maxthresh = height[i];
         break;
       }
     }
    // a = minthresh + maxthresh;
     thresh = maxthresh; //division(a,2);
    */

     while (phaseFlag == 3){
         //if (sample_not_processed) {
             //__bic_SR_register(GIE);
         //}
         while (!sample_ready);
         sample_ready = 0;
         data_in = ADC10MEM;
         NoiseLvlLearning(data_in);
     }
     //noiselvl = division(noiselvl, countInterval);
     a=0;
     //max_val = 0;
     while (phaseFlag == 4) {
         //if (sample_not_processed) {
            // __bic_SR_register(GIE);
         //}
         while (!sample_ready);
         sample_ready = 0;
         data_in = ADC10MEM;
         detection(data_in);
     }

     a=0;

}



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
/*
void NoiseLvlLearning(int thresh, int data) {

  int b;

  if (count < 30) {
    lastVal += abs(data);
  }

  else if ((data < thresh) && (timeval < lastPI + PtoP)) {

    b = division(lastVal, count);
    if (noiselvl + b < noiselvl){
        noiselvl = division(noiselvl, countInterval) + b;
        countInterval = 2;
        count = -1;
        lastVal = 0;
    }

    else {
        noiselvl += b;
        countInterval++;
        count = -1;
        lastVal = 0;
    }

  }

  if ((data > thresh) && (timeval > lastPI + PtoP)) {
    lastPI = timeval;
  }
  count++;
}
*/

void detection(int data) {

/*
    if (data > thresh) {

            if (idx < 5) {
                peakInd[idx] = timeval;
            }

            idx++;

        }

*/

    if ((abs(data) < thresh) && (abs(data) > noiselvl) && (timeval > lastPI + PtoP) && (findEnd == 0) && (findPeak == 0)) {
            if (idx < 5) {
                startInd[idx] = timeval;
            }
            findPeak = 1;
    }

    else if ((data > thresh) && (findPeak == 1) && (findEnd == 0)) {

        if (idx < 5) {
            peakInd[idx] = timeval;
        }
        lastPI = timeval;
        findEnd = 1;
        findPeak = 0;
    }

    else if ((abs(data) < noiselvl) && (timeval > lastPI + 80) && (findEnd == 1) && (findPeak == 0)) {
        if (idx < 5) {
            endInd[idx] = timeval;
        }
        findEnd = 0;
        idx++;
    }

}

int division(int a, int b) {

  // count = a/b

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

/*
// Port 1 interrupt service routine
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
    P1OUT ^= BIT7;      // verification of sync success
    // Trigger new measurement
    timeval = 0;
    __bic_SR_register_on_exit(CPUOFF);
    // Exit LPM
    //_BIC_SR_IRQ();
}
*/
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

}


#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(PORT1_VECTOR))) Port_1 (void)
#else
#error Compiler not supported!
#endif
{
/*
// Timer A0 interrupt service routine
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=TIMER0_A0_VECTOR
__interrupt void Timer_A (void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(TIMER0_A0_VECTOR))) Timer_A (void)
#else
#error Compiler not supported!
#endif
{*/
  P1IFG &= ~BIT3;                           // P1.3 IFG cleared
  ADC10CTL0 |= ENC + ADC10SC;             // Sampling and conversion start
  if (timeval == 0){
     phaseFlag = 1;
   } else if (timeval == 5000){
       phaseFlag = 2;
   } else if (timeval == 10000){
     phaseFlag = 3;
   } else if (timeval == 20000) {
       phaseFlag = 4;
   } else if (timeval == 30000) {
       phaseFlag = 0;
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
  //  if (sample_ready == 0) { //Make sure we process samples fast enough
   //     sample_not_processed = 1;
  //  }
    sample_ready = 1;



}
