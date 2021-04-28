#include "activity1.h"
#include "activity2.h"
#include "activity3.h"


int main()
{
    
    pins_init();
    initADC();
    initPWM();
    uint16_t temp;


    while(1)
    {
        if( !((InputFromB & (1<<LedIn1)) || (InputFromB & (1<<LedIn2))))
        {
            ledON();
            temp=ReadADC(0);
            PWMoutput(temp);

        }
        else
        {
            ledOFF();
            _delay_ms(200);
        }
    }
    
    

    return 0;
}
