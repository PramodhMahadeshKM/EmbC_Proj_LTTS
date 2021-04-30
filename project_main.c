/**
 * @file project_main.c
 * @author PramodhMahadeshKM(pramodhmahadesh@gmail.com)
 * @brief Integration of all the activities for a Heat Controller System
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"


int main()
{
    
    pins_init();
    initADC();
    initPWM();
    initUSART(103);
    uint16_t temp;
    char disp_val;


    while(1)
    {
        if( !((InputFromB & (1<<SeatedSwitch)) || (InputFromB & (1<<HeaterOnSwitch))))
        {
            ledON();
            temp=ReadADC(0);
            disp_val= PWMoutput(temp);
            WriteCharUSART(disp_val);

        }
        else
        {
            ledOFF();
            PWMout=0;
            disp_val=0;
            WriteCharUSART(disp_val);
            _delay_ms(200);
        }
    }
    
    

    return 0;
}
