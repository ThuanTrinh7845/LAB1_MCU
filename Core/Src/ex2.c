/*
 * ex2.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */
#include "ex2.h"

int led_state = 0, red = 4, green = 2, yellow = 1;

void ex2_run(){
		  switch (led_state)
		  {
		  	  case 0:
		  		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		  		red--;
		  		break;
		  	  case 1:
		  		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		  		green--;
		  		break;
		  	  case 2:
		  		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		  		yellow--;
		  		break;
		  }

		  HAL_Delay(1000);

		  if (red < 0)
		  {
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		  	  led_state++;
		  	  red = 4;
		  }
		  if (green < 0)
		  {
		  	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		  	  led_state++;
		  	  green = 2;
		  }
		  if (yellow < 0)
		  {
		  	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		  	  led_state = 0;
		  	  yellow = 1;
		  }
}

