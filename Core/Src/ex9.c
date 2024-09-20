/*
 * ex9.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */
#include "ex9.h"

void clearNumberOnClock(int num){
		switch(num){
			case 0:
				HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
				break;
			case 1:
				HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
				break;
			case 2:
				HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
				break;
			case 3:
				HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
				break;
			case 4:
				HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
				break;
			case 5:
				HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
				break;
			case 6:
				HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
				break;
			case 7:
				HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_SET);
				break;
			case 8:
				HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_SET);
				break;
			case 9:
				HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_SET);
				break;
			case 10:
				HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_SET);
				break;
			case 11:
				HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_SET);
				break;
			default:
				break;
		}
}
