/*
 * Platform_Types.h
 *
 *  Created on: Feb 14, 2024
 *      Author: user
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/*-------------------Types----------------------*/
typedef _Bool 					bool_t;
//typedef char 					int8_t;
typedef unsigned char			uint8_t;
typedef signed char 			sint8_t;
typedef signed short 			sint16_t;
typedef unsigned short 			uint16_t;
typedef signed int 				sint32_t;
typedef unsigned int 			uint32_t;
typedef signed long long int 	sint64_t;
typedef unsigned long long int 	uint64_t;

typedef volatile char 					  vint8_t;
typedef volatile unsigned char			  vuint8_t;
typedef volatile signed char 			  vsint8_t;
typedef volatile signed short 			  vsint16_t;
typedef volatile unsigned short 		  vuint16_t;
typedef volatile signed int 			  vsint32_t;
typedef volatile unsigned int 			  vuint32_t;
typedef volatile signed long long int 	  vsint64_t;
typedef volatile unsigned long long int   vuint64_t;

typedef float 		float32_t;
typedef double 		float64_t;

/*-------------------Defines-------------------*/


#ifndef True
#define True ((bool_t)1)
#endif /*True*/

#ifndef False
#define False ((bool_t)0)
#endif /*False*/



#endif /* PLATFORM_TYPES_H_ */
