/*
 * CA.c
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */



#include "CA.h"

void (*CA_state)();
enum {
	CA_waiting,
	CA_driving
}CA_state_id1;

void US_Get_Distance(int d);

static int speed = 0;
static int distance = 0;
static int threthold = 50;


void US_Get_Distance(int d){
	distance = d;
	(distance <= threthold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("US--------->distance=%d ----------->CA\n",distance);

}




STATE_define(CA_waiting){
	CA_state_id1 = CA_waiting;
	speed = 0 ;
	printf("CA_Waiting state    distance = %d     speed = %d\n",distance,speed);
	DC_motor(speed);
}


STATE_define(CA_driving){
	CA_state_id1 = CA_driving;
	speed = 30 ;
	printf("CA_Driving state    distance = %d     speed = %d\n",distance,speed);
	DC_motor(speed);
}
