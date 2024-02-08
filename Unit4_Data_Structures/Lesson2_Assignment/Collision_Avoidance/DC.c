/*
 * DC.c
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */

#include "DC.h"

void (*DC_state)();
static int speed = 0;
enum {
	DC_idle,
	DC_busy
}DC_state_id2;

void DC_init(){
	printf("DC_init-----\n");
}

void DC_motor(int s){
	speed = s;
	DC_state = STATE(DC_busy);
	printf("CA --------Speed=%d--------> DC \n",speed);
}

STATE_define(DC_idle){
	DC_state_id2 = DC_idle;
	DC_state = STATE(DC_idle);
	printf("DC idle state      speed =%d \n",speed);


}
STATE_define(DC_busy){
	DC_state_id2 = DC_busy;
	DC_state = STATE(DC_idle);
	printf("DC busy state      speed =%d \n",speed);
}
