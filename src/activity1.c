/**
 * @file activity1.c
 * @author PramodhMahadeshKM(pramodhmahadesh@gamil.com)
 * @brief source file defining functions for the header activity1.h 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"



void pins_init(){
    
    DirectionReg |= (1<<LedOut);       // Set as output pin
    
    DirectionReg &= ~(1<<SeatedSwitch);      // Set as input pin
    PortInUse |= (1<<SeatedSwitch);      // Initialize to high due to pull up config 

    DirectionReg &= ~(1<<HeaterOnSwitch);      // Set as input pin
    PortInUse |= (1<<HeaterOnSwitch);      // Initialize to high due to pull up config 
    
}

void ledON(){
    PortInUse = PortInUse | (1<<LedOut);
    }

void ledOFF(){
    PortInUse = PortInUse & ~(1<<LedOut);
}
