/*
 * Platform_Types.h
 *
 * Created on : Dec 22, 2021
 *     Author : Mina Karam
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

// Unsigned integer data types
typedef unsigned char               uint8_t;
typedef unsigned short              uint16_t;

typedef unsigned long long int      uint64_t;

// Signed integer data types
typedef signed char                 sint8_t;
typedef signed short                sint16_t;
typedef signed int                  sint32_t;
typedef signed long long int        sint64_t;


// Float data types
typedef float       float32;
typedef double      float64;

// Boolean date types
typedef enum
{
	false,
	ture,
}bool;

// Error types which used in ErrorIndication Function in any Default Case in Switch
typedef enum
{
	InvalidArgument,    //in any configuration to Pins or Ports
	OverFlow            //in any configuration to LEDs For Example
}ErrorType;

#define NULL ((void *)0)

#endif /* PLATFORM_TYPES_H_ */
