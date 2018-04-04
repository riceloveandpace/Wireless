/* --COPYRIGHT--,BSD_EX
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *******************************************************************************
 *
 *                       MSP430 CODE EXAMPLE DISCLAIMER
 *
 * MSP430 code examples are self-contained low-level programs that typically
 * demonstrate a single peripheral function or device feature in a highly
 * concise manner. For this the code may rely on the device's power-on default
 * register values and settings such as the clock configuration and care must
 * be taken when combining code from several examples to avoid potential side
 * effects. Also see www.ti.com/grace for a GUI- and www.ti.com/msp430ware
 * for an API functional library-approach to peripheral configuration.
 *
 * --/COPYRIGHT--*/
//******************************************************************************
//   MSP430G2xx3 Demo - USCI_A0, SPI 3-Wire Slave Data Echo
//
//   Description: SPI slave talks to SPI master using 3-wire mode. Data received
//   from master is echoed back.  USCI RX ISR is used to handle communication,
//   CPU normally in LPM4.  Prior to initial data exchange, master pulses
//   slaves RST for complete reset.
//   ACLK = n/a, MCLK = SMCLK = DCO ~1.2MHz
//
//   Use with SPI Master Incremented Data code example.  If the slave is in
//   debug mode, the reset signal from the master will conflict with slave's
//   JTAG; to work around, use IAR's "Release JTAG on Go" on slave device.  If
//   breakpoints are set in slave RX ISR, master must stopped also to avoid
//   overrunning slave RXBUF.
//
//                MSP430G2xx3
//             -----------------
//         /|\|              XIN|-
//          | |                 |
//          | |             XOUT|-
// Master---+-|RST              |
//            |             P1.7|-> Data Out (UCB0SIMO)
//            |                 |
//            |             P1.6|<- Data In (UCB0SOMI)
//            |                 |
//            |             P1.5|-> Serial Clock In (UCB0CLK)
//
//   D. Dang
//   Texas Instruments Inc.
//   February 2011
//   Built with CCS Version 4.2.0 and IAR Embedded Workbench Version: 5.10
//******************************************************************************
#include <msp430.h>
#include <stdint.h>


#define PREAMBLE    0xAA
#define FW_VER      0x02

#define MAX_BUFFER_SIZE     10
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

volatile uint8_t sample_ready;
volatile unsigned int timeval;
volatile char phaseFlag;

int tx_skip= 0;
int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  BCSCTL3 = XCAP_3; //enable 12.5 pF oscillator

  ADC10CTL0 = ADC10SR + ADC10ON + ADC10IE; // + ADC10SHT_1 // ADC10ON, interrupt enabled, 8 conversion clocks (13+8=21 clocks total)

  ADC10CTL1 = INCH_4 + ADC10DF;//+ ADC10SSEL_1;   //                     // input A4, no clock divider; 2's complement out; ACLK select; single channel-single conversion
  ADC10AE0 |= BIT4;                         // PA.4 ADC option select

  P2DIR |= BIT5; //CS
  P2DIR |= BIT4;
  P2SEL &= ~(BIT5);
  P2SEL2 &= ~(BIT5);
  P2OUT |= BIT5;

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
  phaseFlag = 0;

  TransmitBuffer[0] = PREAMBLE; // Read one register from USER memory space
  TransmitBuffer[1] = FW_VER; // Address to read
  TransmitBuffer[2] = 0x13; //Dummy data
  TransmitBuffer[3] = 0x45;
  TransmitBuffer[4] = 0x55;
  TransmitBuffer[5] = 0x65;

  __bis_SR_register(GIE);       // enable interrupts
  while(1){
      if (sample_ready) {
          sample_ready = 0;
          int16_t sample = ADC10MEM;
          P2OUT = BIT4;

          //Algorithm

          if (tx_skip++ == 100) {
            tx_skip = 0;
            updateRockyRegister(0x30,0x1234);
          }
          P2OUT &= ~BIT4;
      }

      if (rocky100_is_idle()) {
          P2OUT |= BIT4;
          mcu_lpm_enter(3);//LPM3 keeps ACLK running
      }
      else
      {
          P2OUT &= ~BIT4;
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
