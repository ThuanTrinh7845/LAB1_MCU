/*
 * ex10.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */

#include "ex10.h"

void ex10_run(int sec, int min, int hour){
	while (1){
		  if (sec >= 12){
			  sec = 0;
			  clearNumberOnClock(min);
			  min++;
		  }
		  if (min >= 12){
			  clearNumberOnClock(hour);
			  hour++;
			  min = 0;
		  }
		  if (hour >= 12){
			  hour = 0;
		  }
		  setNumberOnClock(sec);
		  setNumberOnClock(min);
		  setNumberOnClock(hour);

		  HAL_Delay(1000);
		  clearNumberOnClock(sec);
		  sec++;
	}
}
