/*
 * STM32F103X6.h
 *
 *  Created on: Jul 3, 2024
 *      Author: ismail
 */

#ifndef INC_STM32F103X6_H_
#define INC_STM32F103X6_H_
//Includes
#include <stdio.h>
#include <stdint.h>

//---------------------------------------
//Base addresses for Memories

#define FLASH_Memory_BASE 							0x08000000UL
#define System_Memory_BASE 							0x1FFFF000UL
#define SRAM_Memory_BASE 							0x20000000UL
#define Peripherals_BASE 							0x40000000UL
#define Cortex_M3_Internal_Peripherals_BASE 		0xE0000000UL

//---------------------------------------
//NVIC Register MAP
#define NVIC_BASe      0xE000E100UL
#define NVIC_ISER0	    *(volatile uint32_t *)(NVIC_BASe + 0x00)
#define NVIC_ISER1		*(volatile uint32_t *)(NVIC_BASe + 0x04)
#define NVIC_ISER2		*(volatile uint32_t *)(NVIC_BASe + 0x08)

#define NVIC_ICER0		*(volatile uint32_t *)(NVIC_BASe + 0x80)
#define NVIC_ICER1		*(volatile uint32_t *)(NVIC_BASe + 0x84)
#define NVIC_ICER2		*(volatile uint32_t *)(NVIC_BASe + 0x88)
//---------------------------------------
//Base addresses for AHB Peripherals

#define RCC_BASE       0x40021000UL
//or we can write it like this (Peripherals_BASE + 0x00021000UL)

//---------------------------------------
//Base addresses for APB2 Peripherals

//GPIO
//A,B fully included in LQFP48 Package
#define GPIOA_BASE     0x40010800UL
#define GPIOB_BASE     0x40010C00UL

//C,D partial included in LQFP48 Package
#define GPIOC_BASE     0x40011000UL
#define GPIOD_BASE     0x40011400UL

//EXTI
#define EXTI_BASE	   0x40010400UL

//AFIO
#define AFIO_BASE      0x40010000UL


#define USART1_BASE    0x40013800UL

#define SPI1_BASE  	   0x40013000UL

//---------------------------------------
//Base addresses for APB1 Peripherals
#define USART2_BASE    0x40004800UL
#define USART3_BASE    0x40004400UL

#define SPI2_BASE	   0x40003800UL
//---------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//Generic Macros:
//-*-*-*-*-*-*-*-*-*-*-*
#define SET_BIT(Reg,Bit)							(Reg |= (1 << Bit))
#define CLEAR_BIT(Reg,Bit)						(Reg &= ~ (1 << Bit))
#define TOGGLE_BIT(Reg,Bit)						(Reg ^= (1 << Bit))
#define READ_BIT(Reg,Bit)						((Reg >> Bit) & 1)
//---------------------------------------

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: GPIO
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
}GPIO_t;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: AFIO
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	volatile uint32_t EVCR;
	volatile uint32_t MAPR;
	volatile uint32_t EXTICR[4];
	volatile uint32_t reserved;//0x18
	volatile uint32_t MAPR2;
}AFIO_t;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: RCC
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t AHBSTR;
	volatile uint32_t CFGR2;
}RCC_t;

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: EXTI
//-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	volatile uint32_t IMR;
	volatile uint32_t EMR;
	volatile uint32_t RTSR;
	volatile uint32_t FTSR;
	volatile uint32_t SWIER;
	volatile uint32_t PR;
}EXTI_t;


//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
// Peripheral register: USART
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	volatile uint32_t SR;				/* Status register, 						Address offset: 0x00 */
	volatile uint32_t DR;				/* Data register , 							Address offset: 0x04 */
	volatile uint32_t BRR;				/* Baud rate register, 						Address offset: 0x08 */
	volatile uint32_t CR1;				/* Control register 1, 						Address offset: 0x0C */
	volatile uint32_t CR2;				/* Control register 2, 						Address offset: 0x10 */
	volatile uint32_t CR3;				/* Control register 3, 						Address offset: 0x14 */
	volatile uint32_t GTPR;			/* Guard time and pre-scaler register, 		Address offset: 0x18 */
}USART_Typedef_t;


//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
// Peripheral register: SPI
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

typedef struct
{
	volatile uint32_t CR1;				/* SPI control register 1, 					Address offset: 0x00 */
	volatile uint32_t CR2;				/* SPI control register 2, 					Address offset: 0x04 */
	volatile uint32_t SR;				/* SPI status register, 					Address offset: 0x08 */
	volatile uint32_t DR;				/* SPI data register, 						Address offset: 0x0C */
	volatile uint32_t CRCPR;			/* SPI CRC polynomial register2, 			Address offset: 0x10 */
	volatile uint32_t RXCRCR;			/* SPI RX CRC register, 					Address offset: 0x14 */
	volatile uint32_t TXCRCR;			/* SPI TX CRC register, 					Address offset: 0x18 */
	volatile uint32_t I2SCFGR;			/* SPI I2S configuration register, 			Address offset: 0x1C */
	volatile uint32_t I2SPR;			/* SPI I2S pre-scaler register, 			Address offset: 0x20 */
}SPI_Typedef_t;





//---------------------------------------


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants: GPIO
//-*-*-*-*-*-*-*-*-*-*-*
#define GPIOA     ((GPIO_t *)GPIOA_BASE)
#define GPIOB     ((GPIO_t *)GPIOB_BASE)
#define GPIOC     ((GPIO_t *)GPIOC_BASE)
#define GPIOD     ((GPIO_t *)GPIOD_BASE)
//or GPIO_t *GPIOA = (GPIO_t *)GPIOA_BASE

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants: AFIO
//-*-*-*-*-*-*-*-*-*-*-*
#define AFIO     ((AFIO_t *)AFIO_BASE)

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants: RCC
//-*-*-*-*-*-*-*-*-*-*-*
#define RCC     ((RCC_t *)RCC_BASE)

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants: EXTI
//-*-*-*-*-*-*-*-*-*-*-*
#define EXTI     ((EXTI_t *)EXTI_BASE)

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants: USART
//-*-*-*-*-*-*-*-*-*-*-*

#define USART1			((USART_Typedef_t*)USART1_BASE)
#define USART2			((USART_Typedef_t*)USART2_BASE)
#define USART3			((USART_Typedef_t*)USART3_BASE)


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants: SPI
//-*-*-*-*-*-*-*-*-*-*-*

#define SPI1			((SPI_Typedef_t *)SPI1_BASE)
#define SPI2			((SPI_Typedef_t *)SPI2_BASE)
//---------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//clock enable Macros:
//-*-*-*-*-*-*-*-*-*-*-*

#define RCC_GPIOA_CLK_EN()							SET_BIT(RCC->APB2ENR,2)
#define RCC_GPIOB_CLK_EN()							SET_BIT(RCC->APB2ENR,3)
#define RCC_GPIOC_CLK_EN()							SET_BIT(RCC->APB2ENR,4)
#define RCC_GPIOD_CLK_EN()							SET_BIT(RCC->APB2ENR,5)
#define RCC_GPIOE_CLK_EN()							SET_BIT(RCC->APB2ENR,6)
#define RCC_AFIO_CLK_EN()							SET_BIT(RCC->APB2ENR,0)

//USART

#define RCC_USART1_CLK_EN()	(RCC->APB2ENR |= 1 << 14) //USART1 enable is in bit 14
#define RCC_USART2_CLK_EN()	(RCC->APB1ENR |= 1 << 17) //USART1 enable is in bit 17
#define RCC_USART3_CLK_EN()	(RCC->APB1ENR |= 1 << 18) //USART1 enable is in bit 18


#define RCC_USART1_CLK_DI()	(RCC->APB2RSTR |= 1 << 14) //USART1 disable is in bit 14
#define RCC_USART2_CLK_DI()	(RCC->APB1RSTR |= 1 << 17) //USART1 disable is in bit 17
#define RCC_USART3_CLK_DI()	(RCC->APB1RSTR |= 1 << 18) //USART1 disable is in bit 18



//SPI

#define RCC_SPI1_CLK_EN()	(RCC->APB2ENR |= 1 << 12) //SPI1 enable is in bit 12
#define RCC_SPI2_CLK_EN()	(RCC->APB1ENR |= 1 << 14) //SPI1 enable is in bit 14

#define RCC_SPI1_CLK_DI()	(RCC->APB2ENR &= ~(1 << 12)) //SPI1 disable is in bit 12
#define RCC_SPI2_CLK_DI()	(RCC->APB1ENR &= ~(1 << 14)) //SPI2 disable is in bit 14


#define RCC_SPI1_RESET()	(RCC->APB2RSTR |= 1 << 12) //SPI1 reset is in bit 12
#define RCC_SPI2_RESET()	(RCC->APB1RSTR |= 1 << 14) //SPI2 reset is in bit 14

//---------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//EXTI Macros:
//-*-*-*-*-*-*-*-*-*-*-*
#define 	EXTI0_IRQ			6
#define 	EXTI1_IRQ			7
#define 	EXTI2_IRQ			8
#define 	EXTI3_IRQ			9
#define 	EXTI4_IRQ			10
#define 	EXTI5_IRQ			23
#define 	EXTI6_IRQ			23
#define 	EXTI7_IRQ			23
#define 	EXTI8_IRQ			23
#define 	EXTI9_IRQ			23
#define 	EXTI10_IRQ			40
#define 	EXTI11_IRQ			40
#define 	EXTI12_IRQ			40
#define 	EXTI13_IRQ			40
#define 	EXTI14_IRQ			40
#define 	EXTI15_IRQ			40

//USART
#define USART1_IRQ		37
#define USART2_IRQ		38
#define USART3_IRQ		39

//SPI

#define SPI1_IRQ		35
#define SPI2_IRQ		36

//---------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//NVIC IRQ Enable/Disable Macros:
//-*-*-*-*-*-*-*-*-*-*-*
#define  NVIC_IRQ_6_EXTI0_Enable()    		SET_BIT(NVIC_ISER0,6)
#define  NVIC_IRQ_7_EXTI1_Enable()    		SET_BIT(NVIC_ISER0,7)
#define  NVIC_IRQ_8_EXTI2_Enable()    		SET_BIT(NVIC_ISER0,8)
#define  NVIC_IRQ_9_EXTI3_Enable()    		SET_BIT(NVIC_ISER0,9)
#define  NVIC_IRQ_10_EXTI4_Enable()    		SET_BIT(NVIC_ISER0,10)
#define  NVIC_IRQ_23_EXTI5_9_Enable()    	SET_BIT(NVIC_ISER0,23)
#define  NVIC_IRQ_40_EXTI10_15_Enable()    	SET_BIT(NVIC_ISER1,8)//40-32 = 8

#define  NVIC_IRQ_6_EXTI0_Disable()    		SET_BIT(NVIC_ICER0,6)
#define  NVIC_IRQ_7_EXTI1_Disable()    		SET_BIT(NVIC_ICER0,7)
#define  NVIC_IRQ_8_EXTI2_Disable()    		SET_BIT(NVIC_ICER0,8)
#define  NVIC_IRQ_9_EXTI3_Disable()    		SET_BIT(NVIC_ICER0,9)
#define  NVIC_IRQ_10_EXTI4_Disable()    	SET_BIT(NVIC_ICER0,10)
#define  NVIC_IRQ_23_EXTI5_9_Disable()    	SET_BIT(NVIC_ICER0,23)
#define  NVIC_IRQ_40_EXTI10_15_Disable()    SET_BIT(NVIC_ICER1,8)//40-32 = 8

//USART

#define NVIC_IRQ37_USART1_Enable()			(NVIC_ISER1 |= 1<<(USART1_IRQ - 32))// USART1
#define NVIC_IRQ38_USART2_Enable()			(NVIC_ISER1 |= 1<<(USART2_IRQ - 32))// USART2
#define NVIC_IRQ39_USART3_Enable()			(NVIC_ISER1 |= 1<<(USART3_IRQ - 32))// USART3


#define NVIC_IRQ37_USART1_Disable()			(NVIC_ICER1 |= 1<<(USART1_IRQ - 32))// USART1
#define NVIC_IRQ38_USART2_Disable()			(NVIC_ICER1 |= 1<<(USART2_IRQ - 32))// USART2
#define NVIC_IRQ39_USART3_Disable()			(NVIC_ICER1 |= 1<<(USART3_IRQ - 32))// USART3


//SPI
#define NVIC_IRQ35_SPI1_Enable()			(NVIC_ISER1 |= 1<<(SPI1_IRQ - 32))	// SPI1
#define NVIC_IRQ36_SPI2_Enable()			(NVIC_ISER1 |= 1<<(SPI2_IRQ - 32))	// SPI2


#define NVIC_IRQ35_SPI1_Disable()			(NVIC_ICER1 |= 1<<(SPI1_IRQ - 32))	// SPI1
#define NVIC_IRQ36_SPI2_Disable()			(NVIC_ICER1 |= 1<<(SPI2_IRQ - 32))	// SPI2

#endif /* INC_STM32F103X6_H_ */
