#include <msp430.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


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

struct node {
    int data;

    struct node *next;
    struct node *prev;
};

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
// Function prototypes
//------------------------------------------------------------------------------

void TimerA_UART_init(void);
void TimerA_UART_tx(unsigned char byte);
void TimerA_UART_print(char *string);
struct node * insertFirst(struct node *last, int data);
struct node * deleteLast(struct node *last);
struct node * populateListZeros(struct node *last, int size);
int * getEnergyMeanLastN(struct node *last, int n);
struct node * updateBuffer(struct node *last, int data);



void main(void) {
    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer

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
    int ennew, k;
    int tempen;
    int sumAbs = 0;
    int count = 0;
    int temp = 0;

    // int PeakInd[10] = {0};
    // int storen[30] = {0};
    // int recentBools[6] = {0};
    // int startInd[10] = {0};
    // int endInd[10] = {0};



    struct node *recentdatapoints = NULL;
    recentdatapoints = populateListZeros(recentdatapoints,ds.VV);

    struct node *storen = NULL;
    storen = populateListZeros(storen,storLen);

    struct node *recentBools = NULL;
    recentBools = populateListZeros(recentBools, 6);

    struct node *startInd = NULL;
    startInd = populateListZeros(startInd, 10);

    struct node *peakInd = NULL;
    startInd = populateListZeros(peakInd, 10);

    struct node *endInd = NULL;
    startInd = populateListZeros(endInd, 10);



    __bis_SR_register(GIE);       // Enter LPM3 w/ interrupt

    for (;;)
    {

        __bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
        int sample = ADC10MEM;
        count++;
      //   head_dp = (head_dp+1) % 50;
        //   last
          recentdatapoints = updateBuffer(recentdatapoints, sample);
      //   recentdatapoints[head_dp] = sample;
      //   temp += sample;

          int *b;
          b = getEnergyMeanLastN(recentdatapoints, winLen);
            temp = b[0];
            sumAbs = b[1];

        // form of energy minus mean, except
        // instead of energy we have the absolute values
        // and instead of mean we just add all values
        // minimizes computations.

        temp = abs(temp);
        ennew = sumAbs - temp; // this is wrong

            // STOPPED EDITING CODE HERE. COME BACK TO THIS LINE TOMROROW@@@@
        storen = updateBuffer(storen, ennew);
        //   storen[head_sto] = ennew;
      //   head_sto = (head_sto+1) % 30;

        ds.beatDelay++;
        ds.beatFallDelay++;


        //  this part is single peak finder

        recentBools = updateBuffer(recentBools, abs(sample) > ds.thresh);
        // recentBools[head_bool] = abs(sample) > ds.thresh;
        // head_bool = (head_bool+1)%6;


        int boolSum = 0;
        struct node *tempptr = recentBools->next;
        int i;
        for (i=0; i<6; i++) {
            boolSum += tempptr->data;
            tempptr = tempptr->next;
        }

        int temp2 = ds.len + ds.len;
        int count2 = 0;
        while (temp2 >= 3) {
            temp2 -=3;
            count2++;
        }

        if ((boolSum > count2) && (ds.beatDelay >= ds.beatFallDelay) && (ds.beatFallDelay > ds.VV)) {
            if (ds.last_sample_is_sig == 0) {
                ds.beatDelay = 0;
                peakInd = updateBuffer(peakInd, count);
                // PeakInd[head_peak] = count;
                // head_peak = (head_peak+1)%10;
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
            struct node *tempptr = storen->next;
            tempen = tempptr->data;
            // tempen = storen[head_sto];
            k = 0;
            while (tempen >= ds.noiseAvg) {
                k++;
                tempptr = tempptr->next;
                tempen = tempptr->data;

                if (tempen < ds.noiseAvg) {
                    // energy below noise threshold
                    updateBuffer(startInd, count - k - winLen);
                    // startInd[head_start] = count - k - winLen;
                    // head_start = (head_start + 1) % 10;
                }

            }

        }

        if (ds.findEnd) {
            if (storen->next->data < ds.noiseAvg) {
                // finding the end index
                updateBuffer(endInd, count + winLen);
                // endInd[head_end] = count + winLen;
                // head_end = (head_end + 1) % 10;
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




//insert link at the first location
struct node * insertFirst(struct node *last, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;

   if (last == NULL) {
      // isEmpty
      last = link;
      last->next = last;
      last->prev = last;
   } else {
      last->next->prev = link;
      link->next = last->next;
      link->prev = last;

      last->next = link;
      if (last->prev == last) {
         last->prev = link;
      }
   }

   return last;
}

struct node * deleteLast(struct node *last) {
   struct node * newtail;
   struct node * head;
   struct node * tempnode;

   if(last->next == last) {
      last = NULL;
      return last;
   }

   newtail = last->prev;
   head = last->next;
   tempnode = last;

   newtail->next = head;
   head->prev = newtail;
   last = newtail;
   free(tempnode);

   return last;
}


struct node * populateListZeros(struct node *last, int size) {
   // create list of zeros of the size specified
   int i;
   for (i=0;i<size;i++) {
      // add links to the list all of value zero
      last = insertFirst(last, 0);
   }
   return last;
}

struct node * updateBuffer(struct node *last, int data) {
   if (last == NULL) {
      return last;
   }

   // delete last and then add first
   last = deleteLast(last);
   last = insertFirst(last, data);
   return last;
}

int * getEnergyMeanLastN(struct node *last, int n) {
   struct node *ptr = last->next; // pointer to head
   int* data = malloc(sizeof(int) * 2);
   int j;

   if(last != NULL) {
      for (j=0;j<n;j++) {
         data[0] += ptr->data;
         data[1] += abs(ptr->data); // absolute value
         ptr = ptr->next;
         if (ptr == last->next) {
            break;
         }
      }
   }

   return data;
}
