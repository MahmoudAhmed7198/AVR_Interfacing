/*
 * Seven_segmentCore.h
 *
 *  Created on: Feb 15, 2024
 *      Author: Lenovo
 */



/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef SEVEN_SEGMENTCORE_H_
#define SEVEN_SEGMENTCORE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/registers.h"
#include"../../LIB/STD.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void seven_segment_init(void);
void seven_segment_setSec(uint8 sec);
void seven_segment_setMin(uint8 min);
void seven_segment_start(void);




/**********************************************************************************************************************
 *  END OF FILE:
 *********************************************************************************************************************/



#endif /* SEVEN_SEGMENTCORE_H_ */
