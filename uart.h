//****************************************************************************
//*                    MSP430 Popcorn Popper Coffee Roaster                  *
//****************************************************************************
//
//           module:  uart.h
//      description:  Header file for uart
//  original author:  Andrew Schomin
//    creation date:  05-12-2014
//
//****************************************************************************

// === INCLUDES ==============================================================

#include <msp430.h>
#include <legacymsp430.h>
#include "deviceinit.h"

// === DEFINES ===============================================================

#define     TXD                   BIT1    // TXD on P1.1
#define     RXD                   BIT2    // RXD on P1.2

// === GLOBAL VARIABLES =====================================================

// === FUNCTION PROTOTYPES ==================================================

void InitUART( void );
void UARTSendArray( unsigned char *TxArray, unsigned char ArrayLength);