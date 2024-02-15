/*
 *  startup.c
 *
 *  Created on: Feb 14, 2024
 *      ENG.Kareem Khaled Abdelazim
 */
 
 #include "Platform_Types.h"
 
 extern uint32_t _STACK_TOP;
 extern int main();
 void Reset_Handler();
 
 void Default_Handler(){
	 Reset_Handler();
 }
 
 void NMI_Handler () __attribute__((weak, alias("Default_Handler")));
 void H_Fault_Handler () __attribute__((weak, alias("Default_Handler")));
 void MM_Fault_Handler () __attribute__((weak, alias("Default_Handler")));
 void Bus_Fault () __attribute__((weak, alias("Default_Handler")));
 void Usage_Fault_Handler () __attribute__((weak, alias("Default_Handler")));
 
 uint32_t vectors[] __attribute__((section(".vectors"))) = {
	 (uint32_t)		& _STACK_TOP,
	 (uint32_t)		& Reset_Handler,
	 (uint32_t)		& NMI_Handler,
	 (uint32_t)		& H_Fault_Handler,
	 (uint32_t)		& MM_Fault_Handler,
	 (uint32_t)		& Bus_Fault,
	 (uint32_t)		& Usage_Fault_Handler 
 };
 
 
 extern uint32_t _E_TEXT ;
 extern uint32_t _S_DATA ;
 extern uint32_t _E_DATA ;
 extern uint32_t _S_BSS ;
 extern uint32_t _E_BSS ;
 
 void Reset_Handler(){
	 uint32_t Data_Size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA ;
	 uint8_t* P_SRC = (uint8_t*)&_E_TEXT ; 
	 uint8_t* P_DST = (uint8_t*)&_S_DATA ;
	 
	 for (int i =0 ; i < Data_Size ; i++){
		 *((uint8_t*)P_DST++) = *((uint8_t*)P_SRC++);
	 }
	 
	 uint32_t BSS_Size = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS ;
	 uint8_t* P_BSS = (uint8_t*)&_S_BSS ; 
	 
	 
	 for (int i =0 ; i < BSS_Size ; i++){
		 *((uint8_t*)P_BSS++) = (uint8_t)0;
	 }
	 
	 
	 main();
 }