/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng.Kareem Khaled
 * @brief          : Main program body
 ******************************************************************************
 */

#include "STM32F103X6.h"
#include "STM32_F103C6_EXTI_driver.h"
#include "STM32_F103C6_gpio_driver.h"
#include "STM32_F103C6_RCC_driver.h"
#include "STM32_F103C6_USART_driver.h"
#include "STM32_F103C6_SPI_driver.h"
#include "core_cm3.h"

#define TaskA_Stack_Size	100
#define TaskB_Stack_Size	100

#define OS_SET_PSP(add)			__asm volatile("mov r0,%0 \n\t msr PSP,r0" : :"r"(add))
#define OS_SWITCH_SP_TO_PSP		__asm volatile("mrs r1, CONTROL \n\t orr r1,r1,#0x2 \n\t msr CONTROL,r1 ")
#define OS_SWITCH_SP_TO_MSP		__asm volatile("mrs r1, CONTROL \n\t and r1,r1,#0x5 \n\t msr CONTROL,r1 ")
#define cpu_switch_access_level_piviledged		__asm("mrs r3, CONTROL \n\t lsr r3,r3,#0x1 \n\t lsl r3,r3,#0x1 \n\t msr CONTROL,r3 ")
#define cpu_switch_access_level_unpiviledged	__asm("mrs r3, CONTROL \n\t orr r3,r3,#0x1 \n\t msr CONTROL,r3 ")
//dd
#define OS_Generate_Exception	__asm("SVC 0x3")
extern int _estack;
//Main stack
unsigned int _S_MSP = (unsigned int)&_estack;
unsigned int _E_MSP ;

//PSP for task a
unsigned int _S_PSP_TA ;
unsigned int _E_PSP_TA ;

//PSP for task b
unsigned int _S_PSP_TB ;
unsigned int _E_PSP_TB ;




uint8_t TaskA_flag,TaskB_flag,IRQ_Flag = 0;

int control_register = 0 , ipsr_register = 0;



void EXTI9_CALLBACK(void)
{
	if(IRQ_Flag == 0)
	{
		TaskA_flag = 1;
		IRQ_Flag = 1;
	}else if(IRQ_Flag ==1)
	{
		TaskB_flag = 1;
		IRQ_Flag = 0 ;
	}
}

int TaskA(int a, int b, int c)
{
	return a+b+c;
}

int TaskB(int a, int b, int c, int d)
{
	return a+b+c;
}

void MainOs()
{
	_E_MSP = (_S_MSP - 512);

	_S_PSP_TA = (_E_MSP - 8);
	_E_PSP_TA = (_S_PSP_TA - TaskA_Stack_Size);

	_S_PSP_TB = (_E_PSP_TA - 8);
	_E_PSP_TB = (_S_PSP_TB - TaskB_Stack_Size);

	while(1)
	{
		__asm("nop");
		if(TaskA_flag == 1)
		{
			//Set psp register to _S_PSP_TA
			OS_SET_PSP(_S_PSP_TA);
			//stack pointer shadow psp
			OS_SWITCH_SP_TO_PSP;
			//Switch from priviledged to unpriveledged
			cpu_switch_access_level_unpiviledged;
			TaskA_flag = TaskA(1, 2, 3);
			//Switch from unpriveledged to priveledged
			OS_Generate_Exception;
			//SP shadow MSP
			OS_SWITCH_SP_TO_MSP;

		}else if(TaskB_flag == 1)
		{
			//Set psp register to _S_PSP_TB
			OS_SET_PSP(_S_PSP_TB);
			//stack pointer shadow psp
			OS_SWITCH_SP_TO_PSP;
			//Switch from priviledged to unpriveledged
			cpu_switch_access_level_unpiviledged;
			TaskB_flag = TaskB(1, 2, 3, 4);

			//Switch from unpriveledged to priveledged
			OS_Generate_Exception;
			//SP shadow MSP
			OS_SWITCH_SP_TO_MSP;
		}
	}
}
int OS_SVC_SET(int a, int b, int SVC_ID)
{
	int result;
	switch(SVC_ID)
	{
	case 1://ADD
		__asm("svc #0x01");
		break;
	case 2://SUB
		__asm("svc #0x02");
		break;
	case 3://MUL
		__asm("svc #0x03");
		break;
	}

	__asm("mov %0,r0 " :"=r" (result));
	return result;
}

void OS_SVC_services(int* StackFramePointer)
{
	unsigned char SVC_number;
	unsigned int val1,val2;
	SVC_number = *((unsigned char*)(((unsigned char*)StackFramePointer[6])-2));
	val1 = StackFramePointer[0];
	val2 = StackFramePointer[1];
	switch(SVC_number)
	{
	case 1://ADD
		StackFramePointer[0] = val1+val2;
		break;
	case 2://SUB
		StackFramePointer[0] = val1-val2;
		break;
	case 3://MUL
		StackFramePointer[0] = val1*val2;
		break;
	}

}
__attribute ((naked)) void SVC_Handler()
{
	__asm(	"tst lr,#4 \n\t"
			"ITE EQ \n\t"
			"mrseq r0,MSP \n\t"
			"mrsne r0,PSP \n\t"
			"B OS_SVC_services ");
}
int main(void)
{
	//	RCC_GPIOB_CLK_EN();
	//	RCC_AFIO_CLK_EN();
	//
	//	//Set EXTI Configuration
	//	EXTI_PINCONFIG_t EXTIConfig;
	//	EXTIConfig.EXTI_PIN = EXTI9PB9;
	//	EXTIConfig.Trigger = EXTI_Trigger_RISING;
	//	EXTIConfig.IRQ_CallBack = EXTI9_CALLBACK;
	//	EXTIConfig.IRQ_EN = IRQ_Enable;
	//	EXTI_Init(&EXTIConfig);
	//
	//
	//	MainOs();
	//	IRQ_Flag = 1;
	IRQ_Flag = OS_SVC_SET(3,3,1);
	IRQ_Flag = OS_SVC_SET(3,3,2);
	IRQ_Flag = OS_SVC_SET(3,3,3);
	while (1)
	{
		if(IRQ_Flag)
		{
			IRQ_Flag = 0;
		}
		else {  }
	}


}
