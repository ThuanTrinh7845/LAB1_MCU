/*
 * ex10.c
 *
 *  Created on: Sep 8, 2024
 *      Author: THUAN
 */

#include "ex10.h"

void ex10_run(int sec, int min, int hour){
	min = (min / 5) % 12;
	sec = (sec / 5) % 12;
	while (1){
		  if (sec >= 60){
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
		  setNumberOnClock(sec % 12);
		  setNumberOnClock(min);
		  setNumberOnClock(hour);

		  HAL_Delay(100);
		  clearNumberOnClock(sec % 12);
		  sec++;
	}
}
