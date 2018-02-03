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
        int16_t data;

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
    node * insertFirst(node *last, int16_t data);
    node * deleteLast(node *last);
    node * populateListZeros(node *last, int16_t size);
    int16_t * getEnergyMeanLastN(node *last, int16_t n);
    node * updateBuffer(node *last, int16_t data);


    static const int16_t winLen = 5; // len of window to calculate energy
    static const int16_t storLen = 30; // len of energy to store
    int16_t ennew, k;
    int16_t tempen;
    int16_t sumAbs = 0;
    int16_t sampleNum = 0;
    int16_t numBeats = 0;
    int16_t temp = 0;


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



        __bis_SR_register(GIE);       // Enter LPM3 w/ interrupt

        for (;;)
        {
            // turn off the CPU and wait
            __bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
            // when the ADC conversion is finished the CPU will
            // turn back on and we can process the data

            int16_t sample = ADC10MEM; // recieve a sample from the ADC

            if (numBeats < 12) {    // only perform data collection for 12 beats
                sampleNum++;  // increment sampleNum for each new sample

                // add the sample to the buffer of recent data points
                recentdatapoints = updateBuffer(recentdatapoints, sample);

                // using the buffer of datapoints, calculate the
                // 'energy' and 'mean', which will just be the sum of
                // the absolute values, and sum of values in the window.
                int16_t *b;
                b = getEnergyMeanLastN(recentdatapoints, winLen);
                temp = b[0];
                sumAbs = b[1];


                // The algorithm uses a simple form of energy
                // and mean. Instead of energy it is just the absolute
                // values and instead of mean, the absolute value of
                // the sum of values.
                temp = abs(temp);
                ennew = sumAbs - temp;
                storen = updateBuffer(storen, ennew);

                ds.beatDelay++;
                ds.beatFallDelay++;


                //  this part is single peak finder

                recentBools = updateBuffer(recentBools, abs(sample) > ds.thresh);


                int16_t boolSum;
                boolSum = 0;
                node *tempptr = recentBools->next;
                int16_t i;
                for (i=0; i<6; i++) {
                    boolSum += tempptr->data;
                    tempptr = tempptr->next;
                }

                int16_t temp2 = ds.len + ds.len;
                int16_t count2 = 0;
                while (temp2 >= 3) {
                    temp2 -=3;
                    count2++;
                }

                if ((boolSum > count2) && (ds.beatDelay >= ds.beatFallDelay) && (ds.beatFallDelay > ds.VV)) {
                    if (ds.last_sample_is_sig == 0) {
                        ds.beatDelay = 0;
                        peakInd = updateBuffer(peakInd, sampleNum);
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
                    node *tempptr = storen->next;
                    tempen = tempptr->data;
                    k = 0;
                    while (tempen >= ds.noiseAvg) {
                        k++;
                        tempptr = tempptr->next;
                        tempen = tempptr->data;

                        if (tempen < ds.noiseAvg) {
                            // energy below noise threshold
                            updateBuffer(startInd, sampleNum - k - winLen);
                        }

                    }

                }

                if (ds.findEnd) {
                    // if the current data is lower than the average noise
                    if (storen->next->data < ds.noiseAvg) {
                        // update endInd buffer with the index of the end value
                        //
                        updateBuffer(endInd, sampleNum + winLen);
                        numBeats++;
                        ds.findEnd = 0;
                    }
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
        // Exit LPM
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



    //------------------------------------------------------------------------------
    // Subfunctions for node struct
    //------------------------------------------------------------------------------

    //insert link at the first location
    node * insertFirst(node *last, int16_t data) {

        //create a link
        node *link = (node*) malloc(sizeof(node));
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


    node * populateListZeros(node *last, int16_t size) {
        // create list of zeros of the size specified
        int16_t i;
        for (i=0;i<size;i++) {
            // add links to the list all of value zero
            last = insertFirst(last, 0);
        }
        return last;
    }

    node * updateBuffer(node *last, int16_t data) {
        if (last == NULL) {
            return last;
        }

        // delete last and then add first
        last = deleteLast(last);
        last = insertFirst(last, data);
        return last;
    }

    int16_t * getEnergyMeanLastN(node *last, int16_t n) {
        node *ptr = last->next; // pointer to head
        int* data = malloc(sizeof(int) * 2);
        int16_t j;

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
