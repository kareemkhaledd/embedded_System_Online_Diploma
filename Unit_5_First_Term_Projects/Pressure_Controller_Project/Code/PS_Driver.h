/*
 * PS_Driver.h
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#ifndef PS_DRIVER_H_
#define PS_DRIVER_H_

#include "state.h"



ST_Define(PS_INIT);

ST_Define(PS_READING);

ST_Define(PS_WAITING);

extern void (*PS_current_state) ();


#endif /* PS_DRIVER_H_ */
