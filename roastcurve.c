//****************************************************************************
//*                    MSP430 Popcorn Popper Coffee Roaster                  *
//****************************************************************************
//
//           module:  roastcurve.c
//      description:  Initialize the roast curve
//  original author:  Andrew Schomin
//    creation date:  05-14-2014
//
//****************************************************************************

// === INCLUDES ==============================================================

#include "roastcurve.h"

// === GLOBAL VARIABLES ======================================================


// === FUNCTIONS =============================================================

//-----------------------------------------------------------------------------
//
//  GetRoastCurve
//! \brief   Description:  This will send the stored roast curve back to the
//!                        host.
//
//  Entry:
//!   \param NONE
///
//  Exit:
//!   \return NONE ( Does not return any values )
//-----------------------------------------------------------------------------
void GetRoastCurve( void ){

  CurentCurvePoint = (unsigned int *)CURVE_START_ADDRESS;

  while (1){

    unsigned int temp = FlashRead(CurentCurvePoint++);

    UARTSendArray(&temp, 2);

    if(temp == 0xFFFF){

      break;

    }

  }

}
