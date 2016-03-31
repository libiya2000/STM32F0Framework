/**
 ******************************************************************************
 * @file    SpiIf_Isr.c
 * @author  Bernhard Berger
 * @version V1.0.0
 * @date    31.03.2016
 * @brief   Provides an interface to the hardware serial peripheral interface.
 *
 * Copyright (c) FH O� Forschungs und Entwicklungs GmbH, thermocollect
 * You may not use or copy this file except with written permission of the owners.
 ******************************************************************************
 */

#include "SpiIf.h"
#include "SpiIf_Isr.h"

/****************************************************************
 * Type definitions
 ***************************************************************/

/****************************************************************
 * Macros
 ***************************************************************/

/****************************************************************
 * Function declarations
 ***************************************************************/

void SPI1_IRQHandler(void);
void SPI2_IRQHandler(void);

/****************************************************************
 * Global variables
 ***************************************************************/

/****************************************************************
 * User functions
 ***************************************************************/

/****************************************************************
 * Internal functions/callbacks
 ***************************************************************/

void SPI1_IRQHandler(void)
{
  SpiIf_Isr(1);
}

void SPI2_IRQHandler(void)
{
  SpiIf_Isr(2);
}

/****************************************************************
 * Static functions
 ***************************************************************/

