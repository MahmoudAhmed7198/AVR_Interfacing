/*
 * Button_Core.h
 *
 *  Created on: Feb 14, 2024
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
#ifndef BUTTON_CORE_H_
#define BUTTON_CORE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD.h"
#include"../../LIB/registers.h"
#include<util/delay.h>
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define Button_0 ((uint8)2U)
#define Button_1 ((uint8)3U)
#define Button_2 ((uint8)4U)
#define Button_3 ((uint8)5U)



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	Pressed,
	Not_pressed
}button_state;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void button_init(uint8 button_num);
uint8 get_button_value(uint8 button_num);



/**********************************************************************************************************************
 *  END OF FILE:
 *********************************************************************************************************************/



#endif /* BUTTON_CORE_H_ */
