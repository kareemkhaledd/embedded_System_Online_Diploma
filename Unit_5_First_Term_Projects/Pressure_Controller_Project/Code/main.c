/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#include "Platform_Types.h"
#include "DRIVER.h"
#include "Alarm_Actuator.h"
#include "Alarm_Monitor.h"
#include "PS_Driver.h"
#include "Main_Algo.h"


void (*PS_current_state) () = STATE(PS_INIT);
void (*ALARM_ACTUATOR_current_state) () = STATE(ALARM_INIT);
void (*ALARM_MOINTOR_current_state) () = STATE(ALARM_MOINTOR_OFF);
void (*MAIN_ALGO_current_state) () = STATE(HIGH_PRESSURE_DETECTION);

int main(){
	GPIO_INITIALIZATION();
	while(1){
		PS_current_state();
		ALARM_ACTUATOR_current_state();
		ALARM_MOINTOR_current_state();
		MAIN_ALGO_current_state();
	}
}
