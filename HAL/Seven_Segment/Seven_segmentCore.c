/*
 * Seven_segmentCore.c
 *
 *  Created on: Feb 15, 2024
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
#include"Seven_segmentCore.h"
#include<util/delay.h>

/**********************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
static const uint8 seven_seg[10]={0x7E,0x0C,0xB6,0x9E,0xCC,0xDA,0xFA,0x0E,0xFE,0xCE};
uint8 g_sec,g_min;

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

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
void seven_segment_init(void)
{
	SET_BIT(DIO_PORTC->DDR,6);
	SET_BIT(DIO_PORTC->DDR,7);
	DIO_PORTA->DDR=0xFF;
}

void seven_segment_setSec(uint8 sec)
{
	if(sec >=0 && sec<=6)
	{
		SET_BIT(DIO_PORTC->PORT,6);
		CLR_BIT(DIO_PORTC->PORT,7);
		DIO_PORTA->PORT=seven_seg[sec];
		g_sec=sec*10;  //sec=4    g_sec=40
	}
	else
		return;

}
void seven_segment_setMin(uint8 min)
{
	CLR_BIT(DIO_PORTC->PORT,6);
	SET_BIT(DIO_PORTC->PORT,7);
	DIO_PORTA->PORT=seven_seg[min];
	g_min=min; //min=1   g_min=1
}
void seven_segment_start(void)
{
	while(1)
	{
		if(g_sec==0)
		{
			if(g_min==0)
			{
				buzzer_ON();
				return;
			}
			else
			{
				g_sec=70;
				g_min--;
			}
		}
		g_sec-=10;  //g_sec=30   20   10   0
		g_sec/=10; //g_sec=30/10=3   2   1  0

		SET_BIT(DIO_PORTC->PORT,6);
		CLR_BIT(DIO_PORTC->PORT,7);
		DIO_PORTA->PORT=seven_seg[g_sec];
		_delay_ms(1);
		CLR_BIT(DIO_PORTC->PORT,6);
		SET_BIT(DIO_PORTC->PORT,7);
		DIO_PORTA->PORT=seven_seg[g_min];
		_delay_ms(1);
	}

}

/**********************************************************************************************************************
 *  END OF FILE:
 *********************************************************************************************************************/

