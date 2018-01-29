#include <msp430.h>
// #include "ds.h"
#include <stdint.h>

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






void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

    ADC10CTL0 = ADC10SHT_1 + ADC10SR + ADC10ON + ADC10IE; // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)
    ADC10CTL1 = INCH_4 + ADC10DF + ADC10SSEL_1;                       // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
    ADC10AE0 |= BIT4;                         // PA.4 ADC option select
    P1DIR = 0xFF & ~UART_RXD & ~BIT4;               // Set all pins but RXD and A4 to output

    TACCTL0 = CCIE;                             // CCR2 interrupt enabled
    TACCR0 = 32;
    TACTL = TASSEL_1 + MC_1;                  // ACLK, upmode

    detections ds;
    ds.thresh= 945;
    ds.flip = 1;
    ds.len = 6;
    ds.noiseAvg = 301;
    ds.beatDelay = 0;  // track amount of time since last A or V beat
    ds.beatFallDelay = 0;   // track amount of time since last falling edge of A or V beat
    ds.VV = 50;        // num of recent data points to store
    ds.last_sample_is_sig = 0; // flag indicating whether last sample was a A or V beat
    ds.findEnd = 0;


    int winLen = 5; // len of window to calculate energy
    int storLen = 30; // len of energy to store
    int ennew, k, next;
    int tempen, order, h, t;
    int sumAbs = 0; %
    int count = 0;  %
    int temp = 0;   %
    int head_dp = -1;  %
    int head_sto = 0;
    int head_start = 0;
    int head_end = 0;

    int PeakInd[10] = {0};
    int storen[30] = {0};
    int recentBools[6] = {0};
    int startInd[10] = {0};
    int endInd[10] = {0};
    int recentdatapoints[50] = {0}; %






    __bis_SR_register(GIE);       // Enter LPM3 w/ interrupt

    for (;;)
    {

        __bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
        int sample = ADC10MEM;
        count++
        head_dp = (head_dp+1) % 50;
        recentdatapoints[head_dp] = sample;
        temp += sample;

        for (int i = 1; i++; i < winLen) {
            if ((head_dp - i) < 0) {
                temp += recentdatapoints[head_dp - i + 50];
                sumAbs += abs(recentdatapoints[head_dp - i + 50]);
            }

            else {
                temp += recentdatapoints[head_dp - i];
                sumAbs += abs(recentdatapoints[head_dp - i]);
            }
        }

        // form of energy minus mean, except
        // instead of energy we have the absolute values
        // and instead of mean we just add all values 
        // minimizes computations.

        temp = abs(temp);
        ennew = sumAbs - temp; // this is wrong 

        storen[head_sto] = ennew;
        head_sto = (head_sto+1) % 30;

        ds.beatDelay++;
        ds.beatFallDelay++;


        if (ds.last_sample_is_sig == 1) {
            ds.findEnd = 1;
            tempen = storen[head_sto];
            k = 0;
            while (tempen >= ds.noiseAvg) {
                k++;
                if ((head_sto - k)<0) {
                    tempen = storen[head_sto-k+30];
                }
                else {
                    tempen = storen[head_sto - k];
                }

                if (tempen < ds.noiseAvg) {
                    startInd[head_start] = count - k - winLen;
                    head_start = (head_start + 1) % 10;
                }

            }

        }        
        if (findEnd) {
            if (storen[head_sto] < ds.noiseAvg) {
                // finding the end index
                endInd[head_end] = count + winLen;
                head_end = (head_end + 1) % 10;
                ds.findEnd = 0;
            }
        }


    }


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

}


int reset(buffer * cbuf)
{
    int r = -1;

    if(cbuf)
    {
        cbuf->head = 0;
        cbuf->tail = 0;
        r = 0;
    }
    return r;
}

void put(buffer * cbuf, int data)
{
    if(cbuf)
    {
        cbuf->buffer[cbuf->head] = data;
        cbuf->head = (cbuf->head + 1) % cbuf->size;

        if(cbuf->head == cbuf->tail)
        {
            cbuf->tail = (cbuf->tail + 1) % cbuf->size;
        }
    }

}




int empty(buffer cbuf)
{
    // We define empty as head == tail
    return (cbuf.head == cbuf.tail);
}


int full(buffer cbuf)
{
    // We determine "full" case by head being one position behind the tail
    // Note that this means we are wasting one space in the buffer!
    // Instead, you could have an "empty" flag and determine buffer full that way
    return ((cbuf.head + 1) % cbuf.size) == cbuf.tail;
}
