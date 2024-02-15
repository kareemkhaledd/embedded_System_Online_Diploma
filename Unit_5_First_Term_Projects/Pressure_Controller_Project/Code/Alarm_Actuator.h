/*
 * Alarm_Actuator.h
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_

#include "state.h"



ST_Define(ALARM_INIT);
ST_Define(ALARM_WAITING);
ST_Define(ALARM_ON);
ST_Define(ALARM_OFF);

extern void (*ALARM_ACTUATOR_current_state) ();


#endif /* ALARM_ACTUATOR_H_ */
