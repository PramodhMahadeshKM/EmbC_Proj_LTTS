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
        if( !((InputFromB & (1<<LedIn1)) || (InputFromB & (1<<LedIn2))))
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
