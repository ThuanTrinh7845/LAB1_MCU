/*
 * ex5.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */

#include "ex5.h"

int led_stat = 0, red_count = 4, yellow_count = 1, green_count = 2;
int led_stat1 = 0, red_count1 = 4, yellow_count1 = 1, green_count1 = 2;

void ex5_run(){
	switch (led_stat)
	{
		case 0:
			HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_SET);
			display7SEG(red_count);
			red_count--;
			break;
		case 1:
			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_SET);
			display7SEG(green_count);
			green_count--;
			break;
		case 2:
			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_SET);
			display7SEG(yellow_count);
			yellow_count--;
			break;
	}
	switch (led_stat1)
	{
		case 0:
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
			display7SEG2(green_count1);
			green_count1--;
			break;
		case 1:
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
			display7SEG2(yellow_count1);
			yellow_count1--;
			break;
		case 2:
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
			display7SEG2(red_count1);
			red_count1--;
			break;
	}

	HAL_Delay(1000);

	if (red_count < 0)
				  {
		HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_RESET);
		led_stat++;
		red_count = 4;
	}
	if (green_count < 0)
	{
		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_RESET);
		led_stat++;
		green_count = 2;
	}
	if	 (yellow_count < 0)
	{
		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_RESET);
		led_stat = 0;
		yellow_count = 1;
	}


	if (green_count1 < 0)
	{
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);
		led_stat1++;
		green_count1 = 2;
	}
	if (yellow_count1 < 0)
	{
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);
		led_stat1++;
		yellow_count1 = 1;
	}
	if (red_count1 < 0)
	{
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);
		led_stat1 = 0;
		red_count1 = 4;
	}
}
