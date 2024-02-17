/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: Lenovo
 */

#include<util/delay.h>
#include"../../MCAL/PORT/PORT_Core.h"
#include"../../HAL/LED/LED_Core.h"

int main(void)
{

	PORT_Init();
	LED_ON(GRN_LED);
	while(1)
	{



	}

	return 0;
}



