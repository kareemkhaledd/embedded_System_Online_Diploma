/*
 * STM32_F103C6_EXTI_driver.h
 *
 *  Created on: Aug 17, 2024
 *      Author: Eng.Kareem Khaled
 */

#ifndef INC_STM32_F103C6_RCC_DRIVER_H_
#define INC_STM32_F103C6_RCC_DRIVER_H_


//-----------------------------
//Includes
//-----------------------------
#include "stm32f103x6.h"
#include "STM32_F103C6_gpio_driver.h"
//---------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//User Type Definitions
//-*-*-*-*-*-*-*-*-*-*-*
#define HSE_CLK 		(uint32_t)16000000
#define HSI_RC_CLK 		(uint32_t)8000000

//---------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//Macros for Configurations
//-*-*-*-*-*-*-*-*-*-*-*


//---------------------------------------

//-*-*-*-*-*-*-*-*-*-*-*-
//APIS
//-*-*-*-*-*-*-*-*-*-*-*

uint32_t MCAL_RCC_GetSYS_CLKFreq(void);
uint32_t MCAL_RCC_GetHCLKFreq(void);
uint32_t MCAL_RCC_GetPCLK1Freq(void);
uint32_t MCAL_RCC_GetPCLK2Freq(void);

#endif /* INC_STM32_F103C6_RCC_DRIVER_H_ */
