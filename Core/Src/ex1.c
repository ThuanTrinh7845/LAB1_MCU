/*
 * ex1.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */
#include "ex1.h"

int led_red_state = 0;
void ex1_run(){
	switch(led_red_state)
	{
		case 0:
			HAL_GPIO_WritePin (LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin (LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			led_red_state = 1;
			break;
		  case 1:
			HAL_GPIO_WritePin (LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin (LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			led_red_state = 0;
			break;
	}
	HAL_Delay(1000);
}
