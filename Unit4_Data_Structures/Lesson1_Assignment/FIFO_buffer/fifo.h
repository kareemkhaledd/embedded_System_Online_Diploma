/*
 * fifo.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Kareem Khaled
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

//choose the type of elements you want to store in the fifo
#define element_type uint8_t

typedef struct {
	unsigned int count;
	unsigned int length;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_buf_t;

typedef enum{
	FIFO_no_error,
	FIFO_null,
	FIFO_full,
	FIFO_empty
}FIFO_buf_status;

//APIs
FIFO_buf_status FIFO_init (FIFO_buf_t* fifo,element_type* buf,unsigned int length);
FIFO_buf_status FIFO_enqueue (FIFO_buf_t* fifo,element_type item);
FIFO_buf_status FIFO_dequeue (FIFO_buf_t* fifo,element_type* item);
FIFO_buf_status FIFO_FULL (FIFO_buf_t* fifo);
void FIFO_print(FIFO_buf_t* fifo);
#endif /* FIFO_H_ */
