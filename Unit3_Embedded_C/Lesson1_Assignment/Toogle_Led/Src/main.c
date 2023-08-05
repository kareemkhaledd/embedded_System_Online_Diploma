/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Kareem Khaled
 * @brief          : Toggle a led connected to pin A13 in the STM32F103C6
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "Platform_Types.h"
#define RCC_BASE     0x40021000
#define GPIOA_BASE   0x40010800
#define RCC_APB2ENR  *((vuint32_t *)(RCC_BASE + 0x18))
#define GPIOA_CRH    *((vuint32_t *)(GPIOA_BASE +0x04))
typedef union{
	vuint32_t ALL_FIELDS;
	struct{
		vuint32_t Reserved:13;
		vuint32_t PIN13:1;
	}Pins;
}GPIOA_ODR_t;

volatile GPIOA_ODR_t * GPIOA_ODR=(volatile GPIOA_ODR_t *)(GPIOA_BASE + 0x0c);
int main(void)
{	int i;
	RCC_APB2ENR|=(1<<2);
	GPIOA_CRH=(GPIOA_CRH & 0xff0fffff)|0x00200000;
	while(1){
		GPIOA_ODR->Pins.PIN13=1;
		for(i=0;i<10000;i++);
		GPIOA_ODR->Pins.PIN13=0;
		for(i=0;i<10000;i++);
	}
}
