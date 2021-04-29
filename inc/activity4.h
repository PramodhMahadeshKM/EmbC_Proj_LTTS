/**
 * @file activity4.h
 * @author PramodhMahadeshKM (pamodhmahadesh@gmail.com)
 * @brief Read input for Adc and display on oscilloscope
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__

/**
 *@note avr header file 
 */
#include <avr/io.h>

/**
 * @note delay header file
 */
#include <util/delay.h>


/**
 * @brief Defining registers and pins as macros
 * 
 */
#define SetBaudLow (UBRR0L=ubrr_value)
#define SetBaudHigh (UBRR0H=(ubrr_value>>8)&0x00ff)
#define SetCharBits (UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00))
#define EnableReceiverAndTransmitter (UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0))
#define ReadOrWriteData (UDR0)
#define WaitForTransmissionReady (!(UCSR0A&(1<<UDRE0)))


/**
 * @brief initialize the USART registers
 * 
 * @param ubrr_value Baud rate
 */
void initUSART(uint16_t ubrr_value);


/**
 * @brief To write data through serial transmission
 * 
 * @param data input data to be transmitted
 */
void WriteCharUSART(char data);

#endif //activity4.h