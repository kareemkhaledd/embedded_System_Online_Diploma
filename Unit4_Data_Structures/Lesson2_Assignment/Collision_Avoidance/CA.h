/*
 * CA.h
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */

#ifndef CA_H_
#define CA_H_

#include "State.h"



STATE_define(CA_waiting);
STATE_define(CA_driving);


extern void (*CA_state)();
void US_Get_Distance(int d);


#endif /* CA_H_ */
