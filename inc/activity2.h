/**
 * @file activity2.h
 * @author PramodhMahadeshKM (pramodhmahadesh@gmail.com)
 * @brief To take the analog input from potentiometer and store as digital value
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

/**
 *@note avr header file 
 */
#include <avr/io.h>

/**
 * @note delay header file
 */
#include <util/delay.h>

/**
 * @brief defining registers as macros 
 * 
 */
#define RefToVcc (REFS0)
#define EnableADC (ADEN)
#define SetFCPU (ADPS0)
#define MuxReg (ADMUX)
#define CntrlReg (ADCSRA)
#define StrtConv (ADSC)
#define ADCInterruptFlag (ADIF)
#define AtoDvalue (ADC)

/**
 * @brief Initalising for ADC conversion
 * 
 */
void initADC();

/**
 * @brief convert the input analog value and return the digital value
 * 
 * @param select_channel selects the channel(port) to connect for ADC conversion 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t select_channel);

#endif // activity2.h