/*
 * registers.h
 *
 *  Created on: Feb 13, 2024
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
#ifndef LIB_REGISTERS_H_
#define LIB_REGISTERS_H_



/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"STD.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
	uint8 PIN;
	uint8 DDR;
	uint8 PORT;
}DIO_Type;

#define DIO_PORTA ((volatile DIO_Type*)(0x39))
#define DIO_PORTB ((volatile DIO_Type*)(0x36))
#define DIO_PORTC ((volatile DIO_Type*)(0x33))
#define DIO_PORTD ((volatile DIO_Type*)(0x30))

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  END OF FILE:
 *********************************************************************************************************************/




#endif /* LIB_REGISTERS_H_ */