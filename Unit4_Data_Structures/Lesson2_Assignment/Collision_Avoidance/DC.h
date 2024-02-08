/*
 * DC.h
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */

#ifndef DC_H_
#define DC_H_
#include "State.h"



STATE_define(DC_idle);
STATE_define(DC_busy);


extern void (*DC_state)();
void DC_init();


#endif /* DC_H_ */
