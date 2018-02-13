#include <msp430.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


//------------------------------------------------------------------------------
// Hardware-related definitions
//------------------------------------------------------------------------------
#define UART_TXD    0x02                     // TXD on P1.1 (Timer0_A.OUT0)
#define UART_RXD    0x04                     // RXD on P1.2 (Timer0_A.CCI1A)

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
// Custom Defined Bits
//------------------------------------------------------------------------------
#define MOSI_BIT    BIT2                                // P1
#define MISO_BIT    BIT1                                // P1
#define CS_BIT      BIT5
#define SCL_BIT     BIT4

#define ADC_BIT     BIT3

//------------------------------------------------------------------------------
// Custom Structs
//------------------------------------------------------------------------------

typedef struct
{
    int thresh;
    int flip;
    int len;
    int noiseAvg;
    int beatDelay;
    int beatFallDelay;
    int last_sample_is_sig;
    int VV;
    int findEnd;

} detections;

//------------------------------------------------------------------------------
// Function prototypes & Variables
//------------------------------------------------------------------------------
void TimerA_UART_init(void);
void TimerA_UART_tx(unsigned char byte);
void TimerA_UART_print(char *string);
int updateBufferIdx(int size, int head);
int getNegOffsetIndex(int size, int head, int offset);

int sampleNum = 0;
int numBeats = 0;


//------------------------------------------------------------------------------
// Main Function
//------------------------------------------------------------------------------
void main(void) {

    detections ds;
    ds.thresh= 945;
    ds.flip = 1;
    ds.len = 6;
    ds.noiseAvg = 301;                 // currently hardcoded as a calculated average energy of the noise.
    ds.beatDelay = 0;                  // track amount of time since last A or V beat
    ds.beatFallDelay = 0;              // track amount of time since last falling edge of A or V beat
    ds.VV = 50;                        // num of recent data points to store
    ds.last_sample_is_sig = 0;         // flag indicating whether last sample was a A or V beat
    ds.findEnd = 0;


    static const int winLen = 5; // len of window to calculate energy
    static const int storLen = 30; // len of energy to store
    int ennew, k;
    int tempen;
    int sumAbs = 0;
    int temp = 0;


    static const int rdpsize = 50;
    int rdphead = 0;
    int recentdatapoints[50] = {0};

    static const int sesize = 30;
    int sehead = 0;
    int storen[30] = {0};

    static const int rbsize = 6;
    int rbhead = 0;
    int recentBools[6] = {0};

    static const int sisize = 10;
    int sihead = 0;
    int startInd[10] = {0};

    static const int pisize = 10;
    int pihead = 0;
    int peakInd[10] = {0};

    static const int eisize = 10;
    int eihead = 0;
    int endInd[10] = {0};

    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer

    BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

    ADC10CTL0 = ADC10SHT_1 + ADC10SR + ADC10ON + ADC10IE; // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)
    ADC10CTL1 = INCH_4 + ADC10DF + ADC10SSEL_1;                       // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
    ADC10AE0 |= BIT0;                         // PA.4 ADC option select
	P1DIR = 0xFF & ~(CS_BIT + SCL_BIT + MOSI_BIT + BIT0 + BIT3);               // Set all pins but RXD and A4 to output

    P1IE |= BIT3;                                       // P1.3 Interrupt Enabled
    P1IES &= ~BIT3;                                 // P1.3 hi/lo edge
    P1REN |= BIT3;                                      // P1.3 Enable Pull Up on SW2
    P1IFG &= ~BIT3;                                 // P1.3 IFG Cleared

    P1OUT = MISO_BIT;
    P1OUT &= ~ADC_BIT;



    P2DIR = 0xFF & ~(BIT0);
    P2OUT = 0;

    TACCTL0 = CCIE;                             // CCR2 interrupt enabled
    TACCR0 = 32;
    TACTL = TASSEL_1 + MC_1;                    // ACLK, upmode

    __bis_SR_register(GIE);       // Enter LPM3 w/ interrupt

    for (;;)
    {
        // turn off the CPU and wait
        __bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
        
        int sample = ADC10MEM; // receive a sample from the ADC

        // add the sample to the buffer of recent data points
        rdphead = updateBufferIdx(rdpsize, rdphead);
        recentdatapoints[rdphead] = sample;
        {
            int i;
            int temphead;
            for (i=0; i<winLen;i++) {
                temphead = getNegOffsetIndex(rdpsize, rdphead, i);
                temp += recentdatapoints[temphead];
                sumAbs += abs(temp);
            }
        }


        // The algorithm uses a simple form of energy
        // and mean. Instead of energy it is just the absolute
        // values and instead of mean, the absolute value of
        // the sum of values.
        temp = abs(temp);
        ennew = sumAbs - temp;
        sehead = updateBufferIdx(storLen, sehead);
        storen[sehead] = ennew;
        // storen = updateBufferIdx(storen, ennew);

        ds.beatDelay++;
        ds.beatFallDelay++;


        //  this part is single peak finder

        rbhead = updateBufferIdx(rbsize, rbhead);
        recentBools[rbhead] = abs(sample) > ds.thresh;
        // recentBools = updateBufferIdx(recentBools, abs(sample) > ds.thresh);


        int boolSum;
        boolSum = 0;
        {
            int i;
            for (i=0; i<6; i++) {
                boolSum += recentBools[i];
            }
        }

        int temp2 = ds.len + ds.len; // 12
        int count2 = 0;
        while (temp2 >= 3) { // 4
            temp2 -=3;
            count2++;
        }

        if ((boolSum > count2) && (ds.beatDelay >= ds.beatFallDelay) && (ds.beatFallDelay > ds.VV)) {
            if (ds.last_sample_is_sig == 0) {
                ds.beatDelay = 0;
                pihead = updateBufferIdx(pisize, pihead);
                peakInd[pihead] = sampleNum;
                ds.last_sample_is_sig = 1;
            }
        }

        else {
            if (ds.last_sample_is_sig == 1) {
                ds.beatFallDelay = 0;
                ds.last_sample_is_sig = 0;
            }
        }

        if (ds.last_sample_is_sig == 1) {
            ds.findEnd = 1;

            // node *tempptr = storen->next;

            int tempptr = sehead;
            tempen = storen[sehead];
            // tempen = tempptr->data;
            k = 0;
            while (tempen >= ds.noiseAvg) {
                k++;
                tempptr = getNegOffsetIndex(sesize, sehead, k);
                tempen = storen[tempptr];
                if (tempen < ds.noiseAvg) {
                    // energy below noise threshold
                    sihead = updateBufferIdx(sisize, sihead);
                    startInd[sihead] = sampleNum - k - winLen;
                }

            }

        }

        if (ds.findEnd) {
            // if the current data is lower than the average noise
            if (storen[sehead] < ds.noiseAvg) {
                // update endInd buffer with the index of the end value
                //
                eihead = updateBufferIdx(eisize, eihead);
                endInd[eihead] = sampleNum + winLen;
                numBeats++;
                ds.findEnd = 0;
            }
        }
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
    sampleNum = 0;
    numBeats = 0;
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
    //P1OUT |= 0x01;                            // Toggle P1.0
    __bic_SR_register_on_exit(CPUOFF);        // Clear CPUOFF bit from 0(SR)
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
//P1OUT ^= 0x01;                            // Toggle P1.0

    ADC10CTL0 |= ENC + ADC10SC;             // Sampling and conversion start
    sampleNum++;
}



//------------------------------------------------------------------------------
// Subfunctions for node struct
//------------------------------------------------------------------------------

int updateBufferIdx(int size, int head) {
   // manipulates buffer by updating head value
   // then adding in new value for buffer head
   head++;
   if (head >= size) {
      // wrap the head pointer around array
      head = head - size;
   }
   return head;
}

int getNegOffsetIndex(int size, int head, int offset) {
   int temphead;
   // listlen = 2;
   // current head = 1;
   // n = 2;
   // head - n = 3;
   // realindex = 3;
   if (offset > head) {
      temphead = size + head - offset;
   } else {
      temphead = head - offset;
   }

   return temphead;
}
