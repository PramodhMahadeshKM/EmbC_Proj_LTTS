/**
 * @file activity4.c
 * @author PramodhMahadeshKM(pramodhmahadesh@gamil.com)
 * @brief source file defining functions for the header activity4.h
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity4.h"

void initUSART(uint16_t ubrr_value)
{
    SetBaudLow;
    SetBaudHigh;
    SetCharBits;
    EnableReceiverAndTransmitter;
}


void WriteCharUSART(char data)
{
    while(WaitForTransmissionReady)
    {
        //Do nothing
    }
    ReadOrWriteData=data;
}