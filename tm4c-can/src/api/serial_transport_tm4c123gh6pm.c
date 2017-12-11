/**
 *  @file serial_transport_tm4c123gh6pm.c
 *  @brief Mercury API - Serial transport functions for TM4C123GH6PM board
 *  @author Cody Tapscott
 *  @date 11/30/2017
 */


/*
 * Copyright (c) 2016 ThingMagic, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "tm_reader.h"
#include "TM4C123GH6PM.h"


/*** MAX_TX_BUFFER_LENGTH Must be a power of 2 (2,4,8,16,32,64,128,256,512,...) ***/
#define MAX_TX_BUFFER_LENGTH   256
#define TBUFLEN ((uint32_t)((tbuf.head < tbuf.tail) ? ((MAX_TX_BUFFER_LENGTH- tbuf.tail)+tbuf.head):(tbuf.head - tbuf.tail)))

/*** MAX_RX_BUFFER_LENGTH Must be a power of 2 (2,4,8,16,32,64,128,256,512,...) ***/
#define MAX_RX_BUFFER_LENGTH   256
#define RBUFLEN ((uint32_t)((rbuf.head < rbuf.tail) ? ((MAX_RX_BUFFER_LENGTH- rbuf.tail)+rbuf.head):(rbuf.head - rbuf.tail)))

/*
*Circular Buffer Structure
*/
typedef struct buf_st {
    volatile uint32_t head;                      /* Next In Index  */
    uint32_t tail;                               /* Next Out Index */
    volatile char buffer [MAX_RX_BUFFER_LENGTH]; /* Buffer         */
}circBuf_t;

circBuf_t rbuf,tbuf;

/************************Circular Buffer length validation*********************************************/  

#if MAX_TX_BUFFER_LENGTH < 2
#error MAX_TX_BUFFER_LENGTH is too small.  It must be larger than 1.
#elif ((MAX_TX_BUFFER_LENGTH & (MAX_TX_BUFFER_LENGTH-1)) != 0)
#error MAX_TX_BUFFER_LENGTH must be a power of 2.
#endif


#if MAX_RX_BUFFER_LENGTH < 2
#error MAX_RX_BUFFER_LENGTH is too small.  It must be larger than 1.
#elif ((MAX_RX_BUFFER_LENGTH & (MAX_RX_BUFFER_LENGTH-1)) != 0)
#error MAX_RX_BUFFER_LENGTH must be a power of 2.
#endif
/*********************************************************************/  

static unsigned int tx_restart = 1;             /* NZ if TX restart is required     */


/********** UART1_Handler Handles UART1 global interrupt request. ***********/ 

#define UART_RX_INT (1UL << 4)
#define UART_TX_INT (1UL << 5)

#define UART_FR_TXFE (1UL << 7)
#define UART_FR_RXFF (1UL << 6)

void UART1_Handler (void) 
{
  volatile unsigned int FR;
  struct buf_st *p;
	uint32_t next;
  uint8_t receiveByte;
  uint32_t sendByte;

  if (UART1->MIS & UART_RX_INT)                      /* read interrupt  */ 
  {        
    UART1->ICR &= ~UART_RX_INT;               /* clear interrupt */        
  
    receiveByte = (UART1->DR & 0x1FF); // Framing Error bit is ignored
    next= rbuf.head + 1;
    next &= (MAX_RX_BUFFER_LENGTH-1);

    if (next != rbuf.tail)
    {
      rbuf.buffer[rbuf.head] = receiveByte;
      rbuf.head = next;
    }
   }  
  
  if (UART1->FR & UART_FR_TXFE)                       /* check if TX queue empty  */
	{
    UART1->ICR &= ~UART_TX_INT;                /* clear interrupt  */
      if (tbuf.head != tbuf.tail)
      {	
			  sendByte =(tbuf.buffer[tbuf.tail] & 0x0FF);
	      UART1->DR  =sendByte ;
        next = tbuf.tail + 1;
	      next &= (MAX_TX_BUFFER_LENGTH-1);
	      tbuf.tail = next;
      }	
		  else 
      {
        tx_restart = 1;
        UART1->IM &= ~UART_TX_INT;           /* disable TX IRQ if nothing to send */
      }
		}
}

/****************** SendChar:Sends a character ****************/  
int SendChar (int c) 
{
	if (TBUFLEN >= MAX_TX_BUFFER_LENGTH)          /* If the buffer is full            */
  return (-1);                                  /* return an error value            */

	tbuf.buffer[tbuf.head] = c;
  tbuf.head +=1;
  
	if(tbuf.head == MAX_TX_BUFFER_LENGTH)
	tbuf.head = 0;	

  if(tx_restart)                                /* If TX interrupt is disabled   */
  {                          
    tx_restart = 0;                             /* enable it                     */
	  UART1->IM |= UART_TX_INT;            /* Enable TX buffer Interrupt     */
		UART1_Handler(); //Interrupt is not triggered unless queue is freshly emptied, so manually begin.
		//UART1->DR = 0xFF;
  } 
	
  return (0);
}


/****************** Stub implementation of serial transport layer routines. ****************/  
static TMR_Status
s_open(TMR_SR_SerialTransport *this)
{
  int i;
	
  /* Initialize the Tx circular buffer structure */
  tbuf.head = 0;
  tbuf.tail = 0;
  for(i = 0; i< MAX_RX_BUFFER_LENGTH; i++)
  {
    tbuf.buffer[i] = 0;
  }
	
  /* Initialize the Rx circular buffer structure */
  rbuf.head = 0;
  rbuf.tail = 0;
  for(i = 0; i< MAX_RX_BUFFER_LENGTH; i++)
  {
    rbuf.buffer[i] = 0;
  }

  SYSCTL->RCGCUART |=  (   1UL <<  1);          /* enable UART1 clock in run mode */
  SYSCTL->RCGCGPIO |=  (   1UL <<  1);          /* enable GPIOB clock             */
	
	GPIOB->AFSEL     |=  (0x03UL <<  0);					/* Enable Alternative Function for PB0 and PB1 */
	GPIOB->DR8R      |=  (   1UL <<  1);          /* Set 8 mA (high current) drive on PB1 */
	GPIOB->SLR       &= ~(   1UL <<  1); 					/* Disable slew rate control on PB1 */
	GPIOB->DEN       |=  (0x03UL <<  0);					/* Enable Digital Function for PB0 and PB1 */
	
	GPIOB->PCTL      &= ~(0xFFUL <<  0);					/* Clear Function Selection for PB0 and PB1 */
	GPIOB->PCTL      |=  (0x11UL <<  0);					/* Select Function 1 (UART1) for PB0 and PB1 */

	UART1->CTL   &= ~(   1UL <<  0);							/* Disable UART1                    */
	
	// System clock = 50 MHz
	// UART Baud = (50,000,000)/(16*115,200) = 27.126736
	// Integer part = 27
	// Fractional part = round(0.126736 * 64) = 8;
	UART1->IBRD   = 27;							              /* Set 27 as integer part of baud rate   */
	UART1->FBRD   = 8;	                          /* Set 8 as fractional part of baud rate */
	UART1->LCRH   = ((   0UL <<  0) |             /* disable Send Break                    */
                   (   0UL <<  1) |             /* disable Parity Bit                    */
                   (   0UL <<  3) |             /* 1 Stop Bit                            */
                   (   0UL <<  4) |             /* Disable FIFO                          */
                   ( 0x3UL <<  5) );            /* 8 Data Bits                           */
									 
	UART1->IM     = ((UART_RX_INT) |             /* Enable RX buffer Interrupt            */
                   (UART_TX_INT) );            /* Enable TX buffer Interrupt            */
									 
	UART1->CC     =  0x0;				                  /* Select System Clock Source            */
	
  for (i = 0; i < 0x1000; i++) __NOP();         /* avoid unwanted output            */

  NVIC_EnableIRQ(UART1_IRQn);
	
	UART1->CTL   |=  (   1UL <<  0);							/* Enable UART1                    */

    return TMR_SUCCESS;
}

  
static TMR_Status
s_sendBytes(TMR_SR_SerialTransport *this, uint32_t length, 
                uint8_t* message, const uint32_t timeoutMs)
{
  /* This routine should send length bytes, pointed to by message on
  * the serial connection. If the transmission does not complete in
  * timeoutMs milliseconds, it should return TMR_ERROR_TIMEOUT.
  */
  uint32_t i = 0;

  tbuf.head = 0;                                /* clear com buffer indexes */
  tbuf.tail = 0;
  for (i = 0; i<length; i++)
  {
    SendChar(message[i]);
  }
  return TMR_SUCCESS;
}

static TMR_Status
s_receiveBytes(TMR_SR_SerialTransport *this, uint32_t length,
uint32_t* messageLength, uint8_t* message, const uint32_t timeoutMs)
{
  /* This routine should receive exactly length bytes on the serial
  * connection and store them into the memory pointed to by
  * message. If the required number of bytes are note received in
  * timeoutMs milliseconds, it should return TMR_ERROR_TIMEOUT.
  */
  uint32_t index = 0;
	
  while (index < length )
  {
    uint32_t next;

	while (rbuf.head == rbuf.tail);             /*If no data in circular buffer then wait for data*/
    if (rbuf.head != rbuf.tail)
    {	
	  message[index] = rbuf.buffer[rbuf.tail];
      next = rbuf.tail + 1;
	  next &= (MAX_RX_BUFFER_LENGTH-1);
	  rbuf.tail = next;
    }	
	index++;
  }
	
  return TMR_SUCCESS;
}

static TMR_Status
s_setBaudRate(TMR_SR_SerialTransport *this, uint32_t rate)
{
  /* This routine should change the baud rate of the serial connection
  * to the specified rate, or return TMR_ERROR_INVALID if the rate is
  * not supported.
  */
	
  UART1->CTL   &= ~(   1UL <<  0);													/* Disable UART1                    */
	UART1->IBRD   = SystemCoreClock/(16*rate);							  /* Set integer part of baud rate   */
	UART1->FBRD   = ((SystemCoreClock*8)/(rate) % 128 + 1)/2;	/* Set fractional part of baud rate, with proper rounding */
	UART1->CTL   |=  (   1UL <<  0);												  /* Enable UART1                    */

  return TMR_SUCCESS;
}

static TMR_Status
s_shutdown(TMR_SR_SerialTransport *this)
{
  /* This routine should close the serial connection and release any
  * acquired resources.
  */
  UART1->IM &= ~UART_TX_INT;     /* disable TX IRQ if nothing to send  */
  return TMR_SUCCESS;
}

static TMR_Status
s_flush(TMR_SR_SerialTransport *this)
{
  /* This routine should empty any input or output buffers in the
  * communication channel. If there are no such buffers, it may do
  * nothing.
  */
  return TMR_SUCCESS;
}

/**
 * Initialize a TMR_SR_SerialTransport structure with a given serial device.
 *
 * @param transport The TMR_SR_SerialTransport structure to initialize.
 * @param context A TMR_SR_SerialPortNativeContext structure for the callbacks to use.
 * @param device The path or name of the serial device (@c /dev/ttyS0, @c COM1)
 */
TMR_Status
TMR_SR_SerialTransportNativeInit(TMR_SR_SerialTransport *transport,
                                 TMR_SR_SerialPortNativeContext *context,
                                 const char *device)
{
  /* Each of the callback functions will be passed the transport
   * pointer, and they can use the "cookie" member of the transport
   * structure to store the information specific to the transport,
   * such as a file handle or the memory address of the FIFO.
   */

  transport->cookie = context;
  transport->open = s_open;
  transport->sendBytes = s_sendBytes;
  transport->receiveBytes = s_receiveBytes;
  transport->setBaudRate = s_setBaudRate;
  transport->shutdown = s_shutdown;
  transport->flush = s_flush;

#if TMR_MAX_SERIAL_DEVICE_NAME_LENGTH > 0
  if (strlen(device) + 1 > TMR_MAX_SERIAL_DEVICE_NAME_LENGTH)
  {
    return TMR_ERROR_INVALID;
  }
  strcpy(context->devicename, device);
  return TMR_SUCCESS;
#else
  /* No space to store the device name, so open it now */
  return s_open(transport);
#endif
}