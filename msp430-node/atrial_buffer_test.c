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
struct node {
    int data;

    struct node *next;
    struct node *prev;
};

typedef struct node node;

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
node * insertFirst(node *last, int data);
node * deleteLast(node *last);
node * populateListZeros(node *last, int size);
int * getEnergyMeanLastN(node *last, int n);
node * updateBuffer(node *last, int data);


static const int winLen = 5; // len of window to calculate energy
static const int storLen = 30; // len of energy to store
int ennew, k;
int tempen;
int sumAbs = 0;
int sampleNum = 0;
int numBeats = 0;
int temp = 0;


//------------------------------------------------------------------------------
// Main Function
//------------------------------------------------------------------------------
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer

    BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

    ADC10CTL0 = ADC10SHT_1 + ADC10SR + ADC10ON + ADC10IE; // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)
    ADC10CTL1 = INCH_4 + ADC10DF + ADC10SSEL_1;                       // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
    ADC10AE0 |= BIT4;                         // PA.4 ADC option select
    P1DIR = 0xFF & ~UART_RXD & ~BIT4;               // Set all pins but RXD and A4 to output

   //  P1IE |= BIT3;                                       // P1.3 Interrupt Enabled
   //  P1IES &= ~BIT3;                                 // P1.3 hi/lo edge
   //  P1REN |= BIT3;                                      // P1.3 Enable Pull Up on SW2
   //  P1IFG &= ~BIT3;                                 // P1.3 IFG Cleared

    P1OUT = MISO_BIT;
    P1OUT &= ~ADC_BIT;

    P2DIR = 0xFF & ~(BIT0);
    P2OUT = 0;

   //  TACCTL0 = CCIE;                             // CCR2 interrupt enabled
   //  TACCR0 = 32;
   //  TACTL = TASSEL_1 + MC_1;                    // ACLK, upmode


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



    node *recentdatapoints = NULL;
    recentdatapoints = populateListZeros(recentdatapoints,ds.VV);

    node *storen = NULL;
    storen = populateListZeros(storen,storLen);
    node *recentBools = NULL;
    recentBools = populateListZeros(recentBools, 6);
    node *startInd = NULL;
    startInd = populateListZeros(startInd, 10);
    node *peakInd = NULL;
    peakInd = populateListZeros(peakInd, 10);
    node *endInd = NULL;
    endInd = populateListZeros(endInd, 10);



   //  __bis_SR_register(GIE);       // Enter LPM3 w/ interrupt

   //  for (;;)
    {
      // turn off the CPU and wait
      // __bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
      // when the ADC conversion is finished the CPU will
      // turn back on and we can process the data

      int sample = ADC10MEM; // recieve a sample from the ADC

      struct node *last = NULL;
      last = populateListZeros(last, 5);
      // printList(last);

      last = updateBuffer(last, 1);
      // last = deleteLast(last);
      last = updateBuffer(last, 2);
      last = updateBuffer(last, 3);
      last = updateBuffer(last, 4);
      last = updateBuffer(last, 5);
      // printf("%d",length(last));
      // printList(last);
      int *b;
      b = getEnergyMeanLastN(last,5);
      int i;
      for(i=0;i<2;i++) {
         printf("BAR[%d]: %d \n", i, *(b+i));
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
   //  P1IFG &= ~BIT3;                           // P1.3 IFG cleared
   //  P1OUT ^= BIT7;
   //  // Trigger new measurement
   //  sampleNum = 0;
   //  numBeats = 0;
   //  // Exit LPM
    //_BIC_SR_IRQ();
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
   //  __bic_SR_register_on_exit(CPUOFF);        // Clear CPUOFF bit from 0(SR)
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

   //  ADC10CTL0 |= ENC + ADC10SC;             // Sampling and conversion start

}



//------------------------------------------------------------------------------
// Subfunctions for node struct
//------------------------------------------------------------------------------

//insert link at the first location
node * insertFirst(node *last, int data) {

    //create a link
    node *link = (node*) malloc(sizeof(node));
    link->data = data;

    if (last == NULL) {
        // is empty
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

node * deleteLast(node *last) {
    node * newtail;
    node * head;
    node * tempnode;

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

node * populateListZeros(node *last, int size) {
    // create list of zeros of the size specified
    int i;
    for (i=0;i<size;i++) {
        // add links to the list all of value zero
        last = insertFirst(last, 0);
    }
    return last;
}

node * updateBuffer(node *last, int data) {
    if (last == NULL) {
        return last;
    }

    // delete last and then add first
    last = deleteLast(last);
    last = insertFirst(last, data);
    return last;
}

int * getEnergyMeanLastN(node *last, int n) {
    node *ptr = last->next; // pointer to head
    int* datastore = malloc(sizeof(int) * 2);
    int j;

    if(last != NULL) {
        for (j=0;j<n;j++) {
            datastore[0] += ptr->data;
            datastore[1] += abs(ptr->data); // absolute value
            ptr = ptr->next;
            if (ptr == last->next) {
                break;
            }
        }
    }

    return datastore;
}
