#include "activity3.h"

void initPWM()
{
    SetTimer1withFastPWMmode; // fast PWM non inverting mode and wave generation mode as fast PWM without own upper limit
    PrescaleTo64;  // prescalar to 64
    SetPWMoutputPin;
}

void PWMoutput(uint16_t value)
{
    if(value>=0 && value<=200) 
    {PWMout=Pwm20percent;
    _delay_ms(20);}
    else if(value>=201 && value<=500) 
    {PWMout=Pwm40percent;
    _delay_ms(20);}
    else if(value>=501 && value<=700) 
    {PWMout=Pwm70percent;
    _delay_ms(20);}
    else if(value>=701 && value<=1024) 
    {PWMout=Pwm95percent;
    _delay_ms(20);}
    else PWMout=0;
}