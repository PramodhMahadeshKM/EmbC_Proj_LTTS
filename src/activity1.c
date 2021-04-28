#include "activity1.h"



void pins_init(){
    
    DirectionReg |= (1<<LedOut);       // Set as output pin
    
    DirectionReg &= ~(1<<LedIn1);      // Set as input pin
    PortInUse |= (1<<LedIn1);      // Initialize to high due to pull up config 

    DirectionReg &= ~(1<<LedIn2);      // Set as input pin
    PortInUse |= (1<<LedIn2);      // Initialize to high due to pull up config 
    
}

void ledON(){
    PortInUse = PortInUse | (1<<LedOut);
    }

void ledOFF(){
    PortInUse = PortInUse & ~(1<<LedOut);
}
