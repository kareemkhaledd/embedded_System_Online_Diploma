/*
 * PS_Driver.c
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#include "PS_Driver.h"

//pointer to current state

static uint32_t pval;

enum {
	PS_INIT,
	PS_READING,
	PS_WAITING
}PS_State_ID;


ST_Define(PS_INIT){
	PS_State_ID = PS_INIT;

	PS_current_state = STATE(PS_READING);

}

ST_Define(PS_READING){
	PS_State_ID = PS_READING;
	pval = getPressureVal();
	PS_current_state = STATE(PS_WAITING);
}


ST_Define(PS_WAITING){
	PS_State_ID = PS_WAITING;
	Delay(1000);
	PS_current_state = STATE(PS_READING);

}

uint32_t Get_Pressure_Value(){
	return pval;
}


