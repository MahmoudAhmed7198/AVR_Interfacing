/*
 * PORT_Core.c
 *
 *  Created on: Feb 17, 2024
 *      Author: Lenovo
 */

/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include"PORT_Core.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
#define PORT_A  0
#define PORT_B  1
#define PORT_C  2
#define PORT_D  3
/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)
* \Description     : Describe this service
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : parameterName   Parameter Describtion
* \Parameters (out): None
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK
*******************************************************************************/
void PORT_Init(void)
{
	uint8 LoopCounter = 0 , Port = 0 , Pin = 0 , Dir = 0;

	for(LoopCounter = 0 ;LoopCounter < DEFINED_PINS; LoopCounter++ )
	{
		Port = PORT_Init_Pins[LoopCounter].pinOreder / NUMBER_PORT_PINS ;
		Pin  = PORT_Init_Pins[LoopCounter].pinOreder % NUMBER_PORT_PINS ;
		Dir  = PORT_Init_Pins[LoopCounter].pinDir;

		switch(Dir)
		{
			case PIN_OUTPUT:
			   switch(Port)
			   {
			  	 case PORT_A :
				  SET_BIT(DIO_PORTA->DDR , Pin);
				 break;
			  	 case PORT_B :
			  		SET_BIT(DIO_PORTB->DDR , Pin);
			  	 break;
			  	 case PORT_C :
			  		SET_BIT(DIO_PORTC->DDR , Pin);
			  	 break;
			  	 case PORT_D :
			  		SET_BIT(DIO_PORTD->DDR , Pin);
			  	 break;
				 default:
				 break;
			   }
			break;

			case PIN_INPUT:
			  switch(Port)
			  {
			    case PORT_A :
			    CLR_BIT(DIO_PORTA->DDR , Pin);
			    break;
			    case PORT_B :
			    CLR_BIT(DIO_PORTB->DDR , Pin);
			    break;
			    case PORT_C :
			    	CLR_BIT(DIO_PORTC->DDR , Pin);
			    break;
			    case PORT_D :
			    	CLR_BIT(DIO_PORTD->DDR , Pin);
			    break;
				default:
				break;
			  }
			break;

			default:
			break;
		}
	}
}

/**********************************************************************************************************************
 *  END OF FILE:
 *********************************************************************************************************************/

