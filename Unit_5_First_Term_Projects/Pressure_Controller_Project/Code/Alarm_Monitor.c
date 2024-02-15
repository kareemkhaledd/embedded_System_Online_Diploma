/*
 * Alarm_Monitor.c
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#include "Alarm_Monitor.h"




enum {
	ALARM_MOINTOR_OFF,
	ALARM_MOINTOR_ON,
	ALARM_MOINTOR_WAITING
}ALARM_MOINTOR_State_ID;

ST_Define(ALARM_MOINTOR_OFF){
	ALARM_MOINTOR_State_ID = ALARM_MOINTOR_OFF;
	Stop_Alarm();
	if(High_Pressure_Detected()){
		ALARM_MOINTOR_current_state = STATE(ALARM_MOINTOR_ON);
	}
}


ST_Define(ALARM_MOINTOR_ON){
	ALARM_MOINTOR_State_ID = ALARM_MOINTOR_ON;
	Start_Alarm();
	ALARM_MOINTOR_current_state = STATE(ALARM_MOINTOR_WAITING);
}

ST_Define(ALARM_MOINTOR_WAITING){
	ALARM_MOINTOR_State_ID = ALARM_MOINTOR_WAITING;
	Delay(500);
	ALARM_MOINTOR_current_state = STATE(ALARM_MOINTOR_OFF);
}
