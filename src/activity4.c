#include "activity4.h"

void initUSART(uint16_t ubrr_value)
{
    SetBaudLow;
    SetBaudHigh;
    SetCharBits;
    EnableReceiverAndTransmitter;
}

char ReadCharUSART()
{
    while(WaitForDataRead)
    {
        //Do nothing
    }
    return ReadOrWriteData;
}

void WriteCharUSART(char data)
{
    while(WaitForTransmissionReady)
    {
        //Do nothing
    }
    ReadOrWriteData=data;
}