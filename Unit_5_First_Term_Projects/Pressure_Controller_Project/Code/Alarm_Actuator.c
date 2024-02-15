/*
 * Alarm_Actuator.c
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#include "Alarm_Actuator.h"



enum {
	ALARM_INIT,
	ALARM_WAITING,
	ALARM_ON,
	ALARM_OFF,
}ALARM_ACTUATOR_State_ID;

ST_Define(ALARM_INIT){
	ALARM_ACTUATOR_State_ID = ALARM_INIT;
	ALARM_ACTUATOR_current_state = STATE(ALARM_WAITING);
}
ST_Define(ALARM_WAITING){
	ALARM_ACTUATOR_State_ID = ALARM_WAITING;
}
ST_Define(ALARM_ON){
	ALARM_ACTUATOR_State_ID = ALARM_ON;
	Set_Alarm_actuator(1);
	ALARM_ACTUATOR_current_state = STATE(ALARM_WAITING);
}
ST_Define(ALARM_OFF){
	ALARM_ACTUATOR_State_ID = ALARM_OFF;
	Set_Alarm_actuator(0);
	ALARM_ACTUATOR_current_state = STATE(ALARM_WAITING);
}

void Start_Alarm(){
	ALARM_ACTUATOR_current_state = STATE(ALARM_ON);
}
void Stop_Alarm(){
	ALARM_ACTUATOR_current_state = STATE(ALARM_OFF);
}



