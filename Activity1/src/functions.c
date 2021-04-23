#include "act1.h"

void pins_init(){
    
    DDRB |= (1<<PB0);       // Set as output pin
    
    DDRB &= ~(1<<PB6);      // Set as input pin
    PORTB |= (1<<PB6);      // Initialize to high due to pull up config 

    DDRB &= ~(1<<PB7);      // Set as input pin
    PORTB |= (1<<PB7);      // Initialize to high due to pull up config 

}

void led(){
    while(1){
        if( !((PINB & (1<<PB6)) || (PINB & (1<<PB7))))       
        {
            PORTB = PORTB | (1<<PB0);
        }
        else
        {
            PORTB = PORTB & ~(1<<PB0);
        }
    }
}

