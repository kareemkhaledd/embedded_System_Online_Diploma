/*
 * state.h
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#ifndef STATE_H_
#define STATE_H_

#include "Platform_Types.h"
#include "DRIVER.h"


#define ST_Define(_state_)		void ST_##_state_()
#define STATE(_state_)			ST_##_state_

//signal from PS driver to main algorithm
uint32_t Get_Pressure_Value();
//signal from main algorithm to alarm monitor
uint32_t High_Pressure_Detected();
//signals from alarm monitor to alarm actuator
void Stop_Alarm();
void Start_Alarm();



#endif /* STATE_H_ */
