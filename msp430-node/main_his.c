#include <msp430.h>

#define MOSI_BIT	BIT2 // P1
#define MISO_BIT	BIT1 // P1
#define CS_BIT		BIT5 // P1
#define SCL_BIT		BIT4 // P1

#define ADC_BIT		BIT3 // P1


void init_SPI_Slave(void);


int x=0;


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

#include <msp430.h>
#include <stdint.h>

int Hind[11]= {0};
int32_t sumHis = 0;
int lastHis = 0;
int count = 0;
unsigned int repeat = 0;
static int CountSize = 10;
unsigned int tempmaxV[25] = {0};
unsigned int tempmaxI[25] = {0};
unsigned int maxI = 0;
static int MaxAV = 220;
static int MaxRepeat = 10;
static int CountLeft = 10;

// Hardcoded Hacks
// each of these arrays corresponds to the hardcoded labels on signal data
// a_einds - atrial end indicies
// v_sinds - ventricle start indicies
// v_einds - ventrical end indicies
static const uint16_t a_einds[11] = {702,1475,2484,3385,4344,5239,6173,7078,7690,8641,9548};
static const uint16_t v_sinds[11] = {757,1598,2586,3493,4450,5347,6277,7187,7796,8768,9658};
static const uint16_t v_einds[11] = {899,1680,2667,3574,4530,5428,6357,7278,7937,8848,9740};

int idx = 0;
int AEnd_Flag = 0;
int VEnd_Flag = 0;
int16_t timeval = 0;
int v_sind = 0;
int i;
int j;

//int Atrial_End_Crossed, Ventricle_End_Crossed, Ventricle_Start_Crossed;
int main(void)
{
	WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
  

	//    Atrial_End_Crossed = 0; Ventricle_End_Crossed = 0; Ventricle_Start_Crossed = 0;
	// Initialize components
	//init_SPI_Slave();

	x=0;

	BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

	ADC10CTL0 = ADC10SHT_1 + ADC10SR + ADC10ON + ADC10IE; // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)
	ADC10CTL1 = INCH_0 + ADC10DF + ADC10SSEL_1;                       // input A0, no clock divider; 2's complement out; ACLK select; single channel-single conversion
	ADC10AE0 |= BIT0;                         // PA.0 ADC option select
	P1DIR = 0xFF & ~(CS_BIT + SCL_BIT + MOSI_BIT + BIT0 + BIT3);               // Set all pins but RXD and A4 to output


	P1IE |=  BIT3;                            // P1.3 interrupt enabled
	P1IES &= ~BIT3;                            // P1.3 Hi/lo edge
	P1REN |= BIT3;							// Enable Pull Up on SW2 (P1.3)
	P1IFG &= ~BIT3;                           // P1.3 IFG cleared
											//BIT3 on Port 1 can be used as Switch2

	P1OUT =  MISO_BIT;
	P1OUT &= ~ADC_BIT;

	P2DIR = 0xFF & ~(BIT0);
	P2OUT =  0;
	//P2SEL = 
	// P2IE |=  BIT0;                            // P2.0 interrupt enabled
 	// P2IES |= BIT0;                            // P2.0 Hi/lo edge
 	// P2REN |= BIT0;							// Enable Pull Up on SW2 (P2.0)

  	//P2IFG &= ~BIT0;                           // P2.0 IFG cleared

	TACCTL0 = CCIE;                             // CCR0 interrupt enabled
  	TACCR0 = 32;
  	TACTL = TASSEL_1 + MC_1;                  // ACLK, upmode

	timeval = 0;
	idx = 0;										// track number of successfully detected beats
	sumHis = 0;
	AEnd_Flag = 0;								// Set 1 if Atrial beat detected.
	VEnd_Flag = 0;								// Set 1 if Ventricle beat end detected
	i = 0;

	__bis_SR_register(GIE);       // Enter LPM3 w/ interrupt



	for (;;)
	{	
	  // 

		//receive  int AEnd_Flag, int VEnd_Flag, int v_sind
		__bis_SR_register(CPUOFF + GIE);        // LPM0, ADC10_ISR will force exit
		int16_t data_in = ADC10MEM;

		// 
		if(idx <= 12){

			if (timeval == a_einds[idx]) {
				AEnd_Flag = 1;
				VEnd_Flag = 0;
			}
			// check if sample equals end of ventricle and the end
			// of the atrial beat has occurred
			if ((timeval == v_einds[idx]) && (AEnd_Flag == 1)){

				VEnd_Flag = 1;	// set the end of the ventricle to be true
				v_sind = v_sinds[idx]; // note the start point of the ventricle beat
				idx = idx + 1; // increment index of beats
			}


			if (AEnd_Flag) {
				//if detected Atrial, Start His Detection
				if ((VEnd_Flag == 0) && (repeat < MaxRepeat)) {

					//track how many datapoints within one AV beat
					if (repeat < MaxRepeat-1){
						if (count < CountSize+1){
							//count starts from 1, ends with 10
							count = count + 1;

						}
						if (count == CountSize+1) {
							repeat = repeat + 1; //finishing one repeated search within one AV interval
							count = 0;
						}
					}

					if (repeat == MaxRepeat-1) {
						if (count < CountLeft+1){ //count starts from 1, ends with CountLeft
							count = count + 1;
						}
						//for end of AV, clear records of count&repeat
						if (count == CountLeft+1){
							count = 0;
							repeat = 0;
						}
					}

					//record current data sample
					//if a window of data have not collected completely
					if ( ((repeat < MaxRepeat-1) && (count < CountSize)) || ((repeat == MaxRepeat-1) && (count < CountLeft)) ){ //continue suming vals and diffs
						// IndRightNow = IndRightNow + count;
						if (data_in > lastHis){
							tempmaxI[repeat] = timeval;
						}

						sumHis = sumHis + abs(data_in);
						lastHis = data_in; //store last his for calc diff later
					}
					else {
						//calc metrics for His Detection
						tempmaxV[repeat]= sumHis;
						sumHis = 0;
					}


				}

					//if found the end of V/end of estimated AV range(in case of missing ventricle beat)

				if (VEnd_Flag) {

					for (i=1;i<24;i++){
						if ((tempmaxV[i+1] > tempmaxV[i])&&(tempmaxI[i+1] < v_sind)) {
							maxI = tempmaxI[i+1];
						}
					}

					Hind[idx-1] = maxI;
					volatile int dumbdumb = 0;
					if (idx == 11) {
						dumbdumb++;
					}
					for (j=0; j<25; j++) {
						tempmaxV[j] = 0;
						tempmaxI[j] = 0;
					}
					AEnd_Flag = 0;
				}
			}
		}
	}
}

// Port 2 interrupt service routine
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
	timeval = 0;
	idx = 0;
	// Exit LPM
	//_BIC_SR_IRQ();
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

  timeval += 1;
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
/*
#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR (void)
{
	switch(UCA0RXBUF) {
		case 0xC7:
			// no update
			break;
		case 0xC5:
			Atrial_End_Crossed = 1;
			break;
		case 0xC4:
			Ventricle_End_Crossed = 1;
			break;
		case 0xC3:
			Ventricle_Start_Crossed = 1;
			break;
		default:
			break;
	}
	//UCA0TXBUF=*(pTX_BUFF++);
	if (UCA0RXBUF == 0xC7) ; //normal
	UCA0TXBUF=0xF2;
	if (x == 0) {
		P1OUT ^= BIT7;
		x = 1;
	} else {
		x = (x + 1) & 3;
	}
}

void init_clocks()
{
	// MCLK/SMCLK: DCO 
	// Select lowest DCOx and MODx settings
	DCOCTL = 0;
	// Set DCO range
	BCSCTL1 = CALBC1_8MHZ;
	// Set DCO step + modulation
	DCOCTL = CALDCO_8MHZ;

	 //ACLK: VLO 
	// Select VLO as low freq clock
	BCSCTL3 |= LFXT1S_2;
}

void init_SPI_Slave()
{
	// Enable CS interrupt
	P1IES &= ~CS_BIT;                           // CS Low to High edge
	P1IFG &= ~CS_BIT;                           // CS IFG cleared
	P1IE |=  CS_BIT;                            // CS interrupt enabled

	// Enable SPI  pins.
	P1SEL = SCL_BIT + MOSI_BIT + MISO_BIT;
	P1SEL2 = SCL_BIT + MOSI_BIT + MISO_BIT;
	// 3-pin SPI slave, PHA=0, POL=1
	UCA0CTL0 |= UCCKPL + UCMSB + UCSYNC;
	// **Initialize USCI state machine**
	UCA0CTL1 &= ~UCSWRST;

	// Enable Tx interrupts
	IE2=UCA0RXIE;
	IFG2=0;
}*/
