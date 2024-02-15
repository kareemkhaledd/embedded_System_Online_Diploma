/*
 * Main_Algo.c
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#include "Main_Algo.h"

enum {
	HIGH_PRESSURE_DETECTION
}MAIN_ALGO_State_ID;



static uint32_t Pval;
static uint32_t threthold = 20;


ST_Define(HIGH_PRESSURE_DETECTION){
	MAIN_ALGO_State_ID = HIGH_PRESSURE_DETECTION;
	Pval = Get_Pressure_Value();
	MAIN_ALGO_current_state = STATE(HIGH_PRESSURE_DETECTION);
}

uint32_t High_Pressure_Detected(){
	return (Pval > threthold);
}
