/*
 * US.h
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */

#ifndef US_H_
#define US_H_

#include "State.h"


STATE_define(US_busy);


extern void (*US_state)();
void US_init();
int US_GetDistanceRandom(int l , int r , int count);


#endif /* US_H_ */
