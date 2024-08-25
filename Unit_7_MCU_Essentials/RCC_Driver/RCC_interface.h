/*
 * RCC_interface.h
 *
 *  Created on: Feb 23, 2024
 *      Author: KAREEM KHALED
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

/**
 * @brief initialize system clock based on configurations
 *
 */
void MRCC_voidInitSysClock(void);
/**
 * @brief determine the output CLK of MCU
 *
 */
void MRCC_voidMCO_CLK_OUT(void);
/**
 * @brief determine the RCC CLK security system
 *
 */
void MRCC_voidCLK_SECURITY_ENABLE(void);

/**
 * @brief Enable clock for a specific periphral
 *
 * @param copy_u8BusId the bus that the periphral is connected to
 * @param copy_u8PerId the periphral ID number
 */
void MRCC_voidEnableClock(u8 copy_u8BusId, u8 copy_u8PerId);
/**
 * @brief Disable clock for a specific periphral
 *
 * @param copy_u8BusId the bus that the periphral is connected to
 * @param copy_u8PerId the periphral ID number
 */
void MRCC_voidDisabeClock(u8 copy_u8BusId, u8 copy_u8PerId);


#endif /* RCC_INTERFACE_H_ */
