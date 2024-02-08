/*
 * main.c
 *
 *  Created on: Feb 9, 2024
 *      Author: user
 */


#include "CA.h"
#include "DC.h"
#include "US.h"

void init (){
	US_init();
	DC_init();
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}

int main(void) {
	init();

	while(1){
		US_state();
		CA_state();
		DC_state();
	}
	return 0;
}
