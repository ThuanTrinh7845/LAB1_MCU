/*
 * ex3.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */

#include "ex3.h"

int led7_stat = 0, red7_count = 4, yellow7_count = 1, green7_count = 2;
int led7_stat1 = 0, red7_count1 = 4, yellow7_count1 = 1, green7_count1 = 2;

void ex3_run(){
			  switch (led7_stat)
			  {
			  	  case 0:
			  		HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_SET);
			  		HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_SET);
			  		red7_count--;
			  		break;
			  	  case 1:
			  		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_SET);
			  		HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_SET);
			  		green7_count--;
			  		break;
			  	  case 2:
			  		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_SET);
			  		HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_SET);
			  		yellow7_count--;
			  		break;
			  }
			  switch (led7_stat1)
			  {
			      case 0:
			    	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
			    	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
			    	green7_count1--;
			  		break;
			      case 1:
			    	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
			    	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
			    	yellow7_count1--;
			  		break;
			      case 2:
			    	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
			    	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
			    	red7_count1--;
			  		break;
			  	}

			  HAL_Delay(1000);

			  if (red7_count < 0)
			  {
				  HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_RESET);
			  	  HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_RESET);
			  	  led7_stat++;
			  	  red7_count = 4;
			  }
			  if (green7_count < 0)
			  {
			  	  HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
			  	  HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, GPIO_PIN_RESET);
			  	  led7_stat++;
			  	  green7_count = 2;
			  }
			  if (yellow7_count < 0)
			  {
			  	  HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
			  	  HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_RESET);
			  	  led7_stat = 0;
			  	  yellow7_count = 1;
			  }


			  if (green7_count1 < 0)
			  {
				  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);
				  led7_stat1++;
				  green7_count1 = 2;
			  }
			  if (yellow7_count1 < 0)
			  {
				  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);
				  led7_stat1++;
				  yellow7_count1 = 1;
			  }
			  if (red7_count1 < 0)
			  {
				  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);
				  led7_stat1 = 0;
				  red7_count1 = 4;
			  }
}
