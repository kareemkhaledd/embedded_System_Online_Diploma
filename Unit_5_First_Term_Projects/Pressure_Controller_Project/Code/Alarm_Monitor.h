/*
 * Alarm_Monitor.h
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"



ST_Define(ALARM_MOINTOR_OFF);

ST_Define(ALARM_MOINTOR_ON);

ST_Define(ALARM_MOINTOR_WAITING);

extern void (*ALARM_MOINTOR_current_state) ();

#endif /* ALARM_MONITOR_H_ */
