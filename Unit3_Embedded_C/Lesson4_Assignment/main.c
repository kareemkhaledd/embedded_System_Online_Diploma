/* BareMetal sw for ARM cortexM4
Eng,Kareem Khaled
*/

#include "Platform_Types.h"

#define SYSCTL_RCGC2_R	 	*((vuint32_t*)(0x400FE108))
#define GPIO_PORTF_DIR_R  	*((vuint32_t*)(0x40025400))
#define GPIO_PORTF_DATA_R  	*((vuint32_t*)(0x400253FC))
#define GPIO_PORTF_DEN_R   	*((vuint32_t*)(0x4002551C))


void main(){
	vuint32_t delay;
	SYSCTL_RCGC2_R = 0x20;
	for(delay=0;delay<200;delay++);
	GPIO_PORTF_DIR_R |= (1<<3);
	GPIO_PORTF_DEN_R |= (1<<3);
	while(1){
		GPIO_PORTF_DATA_R |= (1<<3);
		for(delay=0;delay<200000;delay++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(delay=0;delay<200000;delay++);
	}
	
	
	
}