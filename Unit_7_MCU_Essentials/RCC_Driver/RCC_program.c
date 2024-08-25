/*
 * RCC_program.c
 *
 *  Created on: Feb 23, 2024
 *      Author: user
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_priv.h"
#include "RCC_config.h"


void MRCC_voidInitSysClock(void){
	#if RCC_CLOCK_TYPE == RCC_HSI
		SET_BIT(RCC_CR,0);				/* Enable HSI */
		RCC_CFGR=0x00000000;			/* Select HSI As System CLK*/

	#elif RCC_CLOCK_TYPE == RCC_HSE_RC
		SET_BIT(RCC_CR,16);				/*Enable HSE*/
		SET_BIT(RCC_CR,18);				/*Enable Bypass*/
		RCC_CFGR=0x00000001;			/* Select HSE As System CLK*/

	#elif RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		SET_BIT(RCC_CR,16);				/*Enable HSE*/
		CLR_BIT(RCC_CR,18);				/*Disable Bypass*/
		RCC_CFGR=0x00000001;			/* Select HSE As System CLK*/

	#elif RCC_CLOCK_TYPE == RCC_PLL
		SET_BIT(RCC_CFGR,1); 			/* Select PLL As System CLK*/
		RCC_CFGR |= ((RCC_PLL_MUL_VAL)<<18);
		#if RCC_PLL_INPUT==RCC_PLL_HSE
			SET_BIT(RCC_CR,16);				/*Enable HSE*/
			SET_BIT(RCC_CFGR,16);			/*Set HSE as PLL input*/
			CLR_BIT(RCC_CFGR,17);			/*HSE clock not divided*/
			SET_BIT(RCC_CR,24);				/*Enable PLL*/
		#elif RCC_PLL_INPUT==RCC_PLL_HSE_DIV_2
			SET_BIT(RCC_CR,16);				/*Enable HSE*/
			SET_BIT(RCC_CFGR,16);			/*Set HSE as PLL input*/
			SET_BIT(RCC_CFGR,17);			/*HSE clock divided by 2*/
			SET_BIT(RCC_CR,24);				/*Enable PLL*/
		#elif RCC_PLL_INPUT==RCC_PLL_HSI_DIV_2
			SET_BIT(RCC_CR,0);				/* Enable HSI */
			CLR_BIT(RCC_CFGR,16);			/*Set HSI/2 as PLL input*/
			SET_BIT(RCC_CR,24);				/*Enable PLL*/
		#else
            #error("YOU CHOOSE WRONG CLOCK SOURCE FOR PLL")
        #endif
	#else
		#error("YOU CHOOSE WRONG CLOCK TYPE")
	#endif


			/* Division Factor of Buses Configuration */
	 RCC_CFGR |= (RCC_AHB_DIV_FACTOR<<4);
	 RCC_CFGR |= (RCC_APB1_DIV_FACTOR<<8);
	 RCC_CFGR |= (RCC_APB2_DIV_FACTOR<<11);

}


/* MicroController CLK output Configuration */
void MRCC_voidMCO_CLK_OUT(void){
	switch(RCC_MCO_CLK_OUT){
		case RCC_MCO_CLK_OUT_NO_CLK :
			CLR_BIT(RCC_CFGR,26);
			break;
		case RCC_MCO_CLK_OUT_SYSTEM_CLK :
			RCC_CFGR |= 0x04000000;
			break;
		case RCC_MCO_CLK_OUT_HSI :
			RCC_CFGR |= 0x05000000;
			break;
		case RCC_MCO_CLK_OUT_HSE :
			RCC_CFGR |= 0x06000000;
			break;
		case RCC_MCO_CLK_OUT_PLL :
			RCC_CFGR |= 0x07000000;
			break;
	}
}

/* End of MicroController CLK output Configuration */


/* Choose Clock Security System */
void MRCC_voidCLK_SECURITY_ENABLE(void){
	switch(RCC_CLOCK_SECURITY_SYSTEM){
		case RCC_CLOCK_SECURITY_SYSTEM_OFF :
			CLR_BIT(RCC_CR,19);
			break;
		case RCC_CLOCK_SECURITY_SYSTEM_ON :
			SET_BIT(RCC_CR,19);
			break;
	}
}
/* End of Choosing Clock Security System */


void MRCC_voidEnableClock(u8 copy_u8BusId, u8 copy_u8PerId){
	if(copy_u8PerId <= 31){/*can't be larger than 31*/
		switch (copy_u8BusId) {
			case RCC_AHB:  SET_BIT(RCC_AHBENR,copy_u8PerId); break;
	        case RCC_APB1: SET_BIT(RCC_APB1ENR,copy_u8PerId); break;
	        case RCC_APB2: SET_BIT(RCC_APB2ENR,copy_u8PerId); break;
	     }
	}
}


void MRCC_voidDisabeClock(u8 copy_u8BusId, u8 copy_u8PerId){
	if(copy_u8PerId <= 31){/*can't be larger than 31*/
		switch (copy_u8BusId) {
			case RCC_AHB:  CLR_BIT(RCC_AHBENR,copy_u8PerId); break;
	        case RCC_APB1: CLR_BIT(RCC_APB1ENR,copy_u8PerId); break;
	        case RCC_APB2: CLR_BIT(RCC_APB2ENR,copy_u8PerId); break;
	     }
	}
}
