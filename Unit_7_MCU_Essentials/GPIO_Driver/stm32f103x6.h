/*
 * stm32f103x6.h
 *
 *  Created on: Aug 16, 2024
 *      Author: Kareem Khaled
 */

#ifndef INC_STM32F103X6_H_
#define INC_STM32F103X6_H_


#define	GET_BIT(reg,n)				(((reg)>>(n))&1)
#define SET_BIT(reg,n)				(reg|=(1<<n))
#define CLR_BIT(reg,n)				(reg&=~(1<<n))
#define TOGGLE_BIT(reg,n)			(reg^=(1<<n))
// volatile unsigned integer data types
typedef volatile unsigned char              vuint8_t;
typedef volatile unsigned short             vuint16_t;
typedef volatile unsigned int               vuint32_t;
typedef volatile unsigned long long int     vuint64_t;

// volatile signed integer data types
typedef volatile signed char                vsint8_t;
typedef volatile signed short               vsint16_t;
typedef volatile signed int                 vsint32_t;
typedef volatile signed long long int       vsint64_t;


//-----------------------------
//Includes
//-----------------------------
#include "stdlib.h"
#include <stdint.h>


//-----------------------------
//Base addresses for Memories
//-----------------------------

#define FLASH_BASE 									0x08000000UL
#define SRAM_BASE									0x20000000UL
#define SYSTEM_MEMORY_BASE							0x1FFFF000UL
#define PERIPHERALS_BASE							0x40000000UL
#define Cortex_M3_Internal_Pheripherals_BASE		0xE0000000UL



//-----------------------------
//Base addresses for AHB Peripherals
//-----------------------------

#define RCC_BASE 			0x40021000UL

//-----------------------------
//Base addresses for APB2 BUS Peripherals
//-----------------------------


#define AFIO_BASE           0x40010000UL
#define EXTI_BASE           0x40010400UL
//Full
#define GPIOA_BASE          0x40010800UL
#define GPIOB_BASE          0x40010C00UL
//Not full
#define GPIOC_BASE          0x40011000UL
#define GPIOD_BASE          0x40011400UL
//Empty
#define GPIOE_BASE          0x40011800UL


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: GPIO
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	 vuint32_t CRL;
	 vuint32_t CRH;
	 vuint32_t IDR;
	 vuint32_t ODR;
	 vuint32_t BSRR;
	 vuint32_t BRR;
	 vuint32_t LCKR;
}GPIO_TypeDef;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: RCC
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	 vuint32_t CR;
	 vuint32_t CFGR;
	 vuint32_t CIR;
	 vuint32_t APB2RSTR;
	 vuint32_t APB1RSTR;
	 vuint32_t AHBENR;
	 vuint32_t APB2ENR;
	 vuint32_t APB1ENR;
	 vuint32_t BDCR;
}RCC_TypeDef;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: AFIO
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	 vuint32_t EVCR;
	 vuint32_t MAPR;
	 vuint32_t EXTICR0;
	 vuint32_t EXTICR1;
	 vuint32_t EXTICR2;
	 vuint32_t EXTICR3;
	 uint32_t  RESERVED0;
	 vuint32_t MAPR2;
}AFIO_TypeDef;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: EXTI
//-*-*-*-*-*-*-*-*-*-*-*


typedef struct
{
	 vuint32_t IMR;
	 vuint32_t EMR;
	 vuint32_t RTSR;
	 vuint32_t FTSR;
	 vuint32_t SWIER;
	 vuint32_t PR;
}EXTI_TypeDef;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants:
//-*-*-*-*-*-*-*-*-*-*-*

#define GPIOA			((GPIO_TypeDef*)GPIOA_BASE)
#define GPIOB			((GPIO_TypeDef*)GPIOB_BASE)
#define GPIOC			((GPIO_TypeDef*)GPIOC_BASE)
#define GPIOD			((GPIO_TypeDef*)GPIOD_BASE)
#define GPIOE			((GPIO_TypeDef*)GPIOE_BASE)


#define RCC				((RCC_TypeDef*)RCC_BASE)

#define EXTI			((EXTI_TypeDef*)EXTI_BASE)

#define AFIO			((AFIO_TypeDef*)AFIO_BASE)


//-*-*-*-*-*-*-*-*-*-*-*-
//clock enable Macros:
//-*-*-*-*-*-*-*-*-*-*-*

#define RCC_GPIOA_CLK_EN()	(SET_BIT(RCC->APB2ENR,2))
#define RCC_GPIOB_CLK_EN()	(SET_BIT(RCC->APB2ENR,3))
#define RCC_GPIOC_CLK_EN()	(SET_BIT(RCC->APB2ENR,4))
#define RCC_GPIOD_CLK_EN()	(SET_BIT(RCC->APB2ENR,5))
#define RCC_GPIOE_CLK_EN()	(SET_BIT(RCC->APB2ENR,6))

#define AFIO_CLK_EN()		(SET_BIT(RCC->APB2ENR,0))


//-*-*-*-*-*-*-*-*-*-*-*-
//Generic Macros:
//-*-*-*-*-*-*-*-*-*-*-*



#endif /* INC_STM32F103X6_H_ */
