/**
 ******************************************************************************
 * @file    LoggerIf_Cfg.c
 * @author  Gilbert Mitter
 * @version V1.0.0
 * @date    13.01.2015
 * @brief   Configuration of the LoggerIf_Cfg module
 ******************************************************************************
 */

#include "Services/LoggerIf.h"
#include "Services/LoggerIf_Cfg.h"
#include "BSP/UartIf.h"

/****************************************************************
 * Type definitions
 ***************************************************************/

/****************************************************************
 * Macros
 ***************************************************************/

/****************************************************************
 * Function declarations
 ***************************************************************/

/****************************************************************
 * Global variables
 ***************************************************************/

/**
 * Defines the LoggerIf_ConfigType.
 */
const LoggerIf_ConfigType LoggerIf_config =
{
  LOGGERIF_LOG_LEVEL,   
	LOGGERIF_IF_PUT_FUNC,
	LOGGERIF_IF_CHANNEL
};

/****************************************************************
 * User functions
 ***************************************************************/

/****************************************************************
 * Internal functions/callbacks
 ***************************************************************/

/****************************************************************
 * Static functions
 ***************************************************************/
