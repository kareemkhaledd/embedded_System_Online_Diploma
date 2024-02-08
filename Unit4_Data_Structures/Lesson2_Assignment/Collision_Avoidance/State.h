/*
 * State.h
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"
#include "stdlib.h"

#define STATE_define(_state_) void ST_##_state_()
#define STATE(_state_)        ST_##_state_



void US_Get_Distance(int d);
void DC_motor(int s);


#endif /* STATE_H_ */
