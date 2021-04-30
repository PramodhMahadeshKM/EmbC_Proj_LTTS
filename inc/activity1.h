/**
 * @file activity1.h
 * @author PramodhMahadeshKM (pramodhmahadesh@gmail.com)
 * @brief Led will turn on if inputs from 2 switches are on.
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__

/**
 *@note avr header file 
 */
#include <avr/io.h>


#define LedOut (PB0)
#define SeatedSwitch (PB6)
#define HeaterOnSwitch (PB7)
#define PortInUse (PORTB)
#define DirectionReg (DDRB)
#define InputFromB (PINB)

/**
 * @brief Initializing the pins to input and output  
 * 
 */
void pins_init();

/**
 * @brief Logic to turn on Led 
 * 
 */
void ledON();

/**
 * @brief Logic to turn off Led
 * 
 */
void ledOFF();

#endif //activity1.h