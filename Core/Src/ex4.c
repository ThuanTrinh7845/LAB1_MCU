/*
 * ex4.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */
#include "ex4.h"

void display7SEG(int num)
{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		if (num == 0)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
		}
		if (num == 1)
		{
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		}
		if (num == 2)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
		if (num == 3)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
		if (num == 4)
		{
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
		if (num == 5)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
		if (num == 6)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
		if (num == 7)
		{
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_SET);
		}
		if (num == 7)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
		}
		if (num == 8)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
		if (num == 9)
		{
			HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, GPIO_PIN_RESET);
		}
}

void display7SEG2(int num)
{
		HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_SET);
		if (num == 0)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_RESET);
		}
		if (num == 1)
		{
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
		}
		if (num == 2)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
		if (num == 3)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
		if (num == 4)
		{
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
		if (num == 5)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
		if (num == 6)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
		if (num == 7)
		{
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_SET);
		}
		if (num == 7)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
		}
		if (num == 8)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(L_GPIO_Port, L_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
		if (num == 9)
		{
			HAL_GPIO_WritePin(H_GPIO_Port, H_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(I_GPIO_Port, I_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(J_GPIO_Port, J_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(K_GPIO_Port, K_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(M_GPIO_Port, M_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(N_GPIO_Port, N_Pin, GPIO_PIN_RESET);
		}
}

