/*
 * US.c
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */


#include "US.h"


void (*US_state)();
static int distance =0;

enum {
	US_busy,
}US_state_id3;


int US_GetDistanceRandom(int l , int r , int count)
{
	 /* this will generate random number in range l and r */
	int i;
	for(i=0; i<count; ++i){
		int rand_num = (rand() % (r - l + 1)) + l;
		return rand_num;
	}
}
void US_init(){
	printf("us_sensor----------init \n");
}
STATE_define(US_busy){

	US_state_id3 = US_busy;
	distance = US_GetDistanceRandom(45,55,1);
	US_Get_Distance(distance);
	printf("US_waiting State: Distance = %d \n",distance);
	US_state = STATE(US_busy);

}
