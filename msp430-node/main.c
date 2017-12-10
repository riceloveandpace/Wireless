//******************************************************************************
//  MSP430G2xx2 Demo - SPI full-Duplex 3-wire Slave
//
//  Description: SPI Master communicates full-duplex with SPI Slave using
//  3-wire mode. The level on P1.4 is TX'ed and RX'ed to P1.0.
//  Master will pulse slave reset for synch start.
//  ACLK = n/a, MCLK = SMCLK = Default DCO
//
//                Slave                      Master
//             MSP430G2xx2          MSP430G2xx2
//             -----------------          -----------------
//            |              XIN|-    /|\|              XIN|-
//            |                 |      | |                 |
//            |             XOUT|-     --|RST          XOUT|-
//            |                 | /|\    |                 |
//            |          RST/NMI|--+<----|P1.2             |
//      LED <-|P1.0             |        |             P1.4|<-
//          ->|P1.4             |        |             P1.0|-> LED
//            |         SDI/P1.7|<-------|P1.6/SDO         |
//            |         SDO/P1.6|------->|P1.7/SDI         |
//            |        SCLK/P1.5|<-------|P1.5/SCLK        |
//
//  D. Dang
//  Texas Instruments Inc.
//  December 2010
//  Built with CCS Version 4.2.0 and IAR Embedded Workbench Version: 5.10
//******************************************************************************

#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;             // Stop watchdog timer
  P1OUT =  0x10;                        // P1.4 set, else reset
  P1REN |= 0x10;                        // P1.4 pullup
  P1DIR = 0x01;                         // P1.0 output, else input
  USICTL0 |= USIPE7 + USIPE6 + USIPE5 + USIOE; // Port, SPI slave
  USICTL1 |= USIIE;                     // Counter interrupt, flag remains set
  USICTL0 &= ~USISWRST;                 // USI released for operation
  USISRL = P1IN;                        // init-load data
  USICNT = 8;                           // init-load counter

  __bis_SR_register(LPM0_bits + GIE);   // Enter LPM0 w/ interrupt
}

    

// USI interrupt service routine
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=USI_VECTOR
__interrupt void universal_serial_interface(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USI_VECTOR))) universal_serial_interface (void)
#else
#error Compiler not supported!
#endif
{
  P1OUT |=  0x01;
  //if (0x01 & P1OUT)
    //P1OUT &= ~0x01;
  //else
    //P1OUT |=  0x01;
  
  //USISRL = P1IN;
  USISRL = 0x00;
  USICNT = 8;                           // re-load counter
}