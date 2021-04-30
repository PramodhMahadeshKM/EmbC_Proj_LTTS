/**
 * @file activity3.c
 * @author PramodhMahadeshKM(pramodhmahadesh@gamil.com)
 * @brief source file defining functions for the header activity3.h
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity3.h"

void initPWM()
{
    SetTimer1withFastPWMmode;
    PrescaleTo64;
    SetPWMoutputPin;
}

char PWMoutput(uint16_t value)
{
    char display_temp;
    if(value>=0 && value<=200) 
    {
        PWMout=Pwm20percent;
        display_temp=20;
        _delay_ms(20);
    }
    else if(value>=201 && value<=500) 
    {
        PWMout=Pwm40percent;
        display_temp=25;
        _delay_ms(20);
    }
    else if(value>=501 && value<=700) 
    {
        PWMout=Pwm70percent;
        display_temp=29;
        _delay_ms(20);
    }
    else if(value>=701 && value<=1024) 
    {
        PWMout=Pwm95percent;
        display_temp=33;
        _delay_ms(20);
    }
    else 
    {
        PWMout=0;
        display_temp=0;
    }
    return display_temp;
}