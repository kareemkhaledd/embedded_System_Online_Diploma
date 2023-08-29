/*
 * lifo.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Kareem Khaled
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
//choose the type of elements you want to store in the lifo
#define element_type uint8_t

typedef struct {
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
}LIFO_buf_t;

typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_buf_status;

//APIs

LIFO_buf_status LIFO_init (LIFO_buf_t* lifo,element_type* buf,unsigned int length);
LIFO_buf_status LIFO_push (LIFO_buf_t* lifo,element_type item);
LIFO_buf_status LIFO_pop (LIFO_buf_t* lifo,element_type* item);
void LIFO_print(LIFO_buf_t* lifo);

#endif /* LIFO_H_ */
