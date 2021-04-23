/**
 * @file act1.h
 * @author PramodhMahadeshKM (pramodhmahadesh@gmail.com)
 * @brief Led will turn on if inputs from 2 switches are on.
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACT_1_
#define _ACT_1_

/**
 *@note avr header file
 * 
 */
#include <avr/io.h>

/**
 * @brief Initializing the pins to input and output  
 * 
 */
void pins_init();

/**
 * @brief Logic to turn on Led depending on inputs
 * 
 */
void led();

#endif