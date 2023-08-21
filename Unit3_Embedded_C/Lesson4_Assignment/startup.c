/* startup.c 
Eng.Kareem Khaled
*/
#include "Platform_Types.h"
extern void main(void);

void Reset_Handler ();
void Default_Handler (){
	Reset_Handler();
}
void NMI_Handler () __attribute__((weak,alias ("Default_Handler")));
void H_Fault_Handler () __attribute__((weak,alias ("Default_Handler")));


static uint32_t Stack_top[256];


void (* const g_p_fn_vectors[])() __attribute__((section(".vectors"))) = {
	(void(*)()) ((uint32_t)Stack_top + sizeof(Stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
};

extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;

void Reset_Handler (){
	//copy data from flash to sram
	uint32_t data_size=(uint8_t *)&_E_data - (uint8_t *)&_S_data;
	uint8_t * P_src =(uint8_t *)&_E_text;
	uint8_t * P_dst =(uint8_t *)&_S_data;
	for(int i=0;i<data_size;i++){
		*((uint8_t *)P_dst++)=*((uint8_t *)P_src++);
	}
	//initialize bss section
	uint32_t bss_size=(uint8_t *)&_E_bss - (uint8_t *)&_S_bss;
	P_dst =(uint8_t *)&_S_bss;
	for(int i=0;i<bss_size;i++){
		*((uint8_t *)P_dst++)=(uint8_t)0;
	}
	
	
	main();
}

