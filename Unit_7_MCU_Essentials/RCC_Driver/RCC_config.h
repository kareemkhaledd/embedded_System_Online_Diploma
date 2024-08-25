/*
 * RCC_config.h
 *
 *  Created on: Feb 23, 2024
 *      Author: KAREEM KHALED
 */

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_
/* Clock Type Configuration */

/* Options:	RCC_HSE_RC
			RCC_HSE_CRYSTAL
			RCC_HSI
			RCC_PLL */
#define RCC_CLOCK_TYPE	            RCC_HSI

/* Options: RCC_PLL_HSI_DIV_2
            RCC_PLL_HSE
            RCC_PLL_HSE_DIV_2
*/
#define RCC_PLL_INPUT

/* Options: RCC_PLL_MUL_2
            RCC_PLL_MUL_3
            RCC_PLL_MUL_4
            RCC_PLL_MUL_5
            RCC_PLL_MUL_6
            RCC_PLL_MUL_7
            RCC_PLL_MUL_8
            RCC_PLL_MUL_9
            RCC_PLL_MUL_10
            RCC_PLL_MUL_11
            RCC_PLL_MUL_12
            RCC_PLL_MUL_13
            RCC_PLL_MUL_14
            RCC_PLL_MUL_15
            RCC_PLL_MUL_16
*/
#define RCC_PLL_MUL_VAL    RCC_PLL_MUL_2

/* Division Factor of Buses Configuration */


	/* AHB */
/* Options:	RCC_AHB_DIV_FACTOR_1
			RCC_AHB_DIV_FACTOR_2
			RCC_AHB_DIV_FACTOR_4
			RCC_AHB_DIV_FACTOR_8
			RCC_AHB_DIV_FACTOR_16
			RCC_AHB_DIV_FACTOR_64
			RCC_AHB_DIV_FACTOR_128
			RCC_AHB_DIV_FACTOR_256
			RCC_AHB_DIV_FACTOR_512 */

#define RCC_AHB_DIV_FACTOR		RCC_AHB_DIV_FACTOR_1

	/* APB2 */
/* Options:	RCC_APB2_DIV_FACTOR_1
			RCC_APB2_DIV_FACTOR_2
			RCC_APB2_DIV_FACTOR_4
			RCC_APB2_DIV_FACTOR_8
			RCC_APB2_DIV_FACTOR_16  */

#define RCC_APB2_DIV_FACTOR		RCC_APB2_DIV_FACTOR_1


	/* APB1 */
/* Options:	RCC_APB1_DIV_FACTOR_1
			RCC_APB1_DIV_FACTOR_2
			RCC_APB1_DIV_FACTOR_4
			RCC_APB1_DIV_FACTOR_8
			RCC_APB1_DIV_FACTOR_16  */
/*Note : Must be set correctly these bits to not exceed 36 MHz on this domain */


#define RCC_APB1_DIV_FACTOR 	RCC_APB1_DIV_FACTOR_1


/* MicroController CLK output Configuration */

/* Options: RCC_MCO_CLK_OUT_NO_CLK
			RCC_MCO_CLK_OUT_SYSTEM_CLK
			RCC_MCO_CLK_OUT_HSI
			RCC_MCO_CLK_OUT_HSE
			RCC_MCO_CLK_OUT_PLL    */

#define RCC_MCO_CLK_OUT  	RCC_MCO_CLK_OUT_SYSTEM_CLK

/* RCC CLK Security Configuration */

/* Options:	RCC_CLOCK_SECURITY_SYSTEM_OFF
			RCC_CLOCK_SECURITY_SYSTEM_ON */
#define RCC_CLOCK_SECURITY_SYSTEM    RCC_CLOCK_SECURITY_SYSTEM_OFF


/* PerId :
 	 AHB:
 	 DMA1   0	DMA2	1	 SRAM	2	FLITF clock 4  	CRC clock 6
 	 FSMC clock 8		SDIOEN 10

 	 APB2:



 	 APB1:

 */

#endif /* RCC_CONFIG_H_ */
