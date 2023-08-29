/*
 ============================================================================
 Name        : fifo_buffer.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "fifo.h"

//determine the width of your buffer
#define width 5
element_type buf[width];
int main(void) {
	element_type i,temp;
	FIFO_buf_t uart_FIFO;
	FIFO_init(&uart_FIFO,buf,5);
	for(i=0;i<7;i++){
		if(FIFO_enqueue(&uart_FIFO,i)==FIFO_no_error)
			printf("\n FIFO_enqueue %X ----->done",i);
		else
			printf("\n FIFO_enqueue %X ----->failed",i);
	}
	FIFO_print(&uart_FIFO);
	if(FIFO_dequeue(&uart_FIFO,&temp)==FIFO_no_error)
		printf("\n FIFO_dequeue %X ----->done",temp);
	else
		printf("\n FIFO_dequeue %X ----->failed",i);
	if(FIFO_dequeue(&uart_FIFO,&temp)==FIFO_no_error)
		printf("\n FIFO_dequeue %X ----->done",temp);
	else
		printf("\n FIFO_dequeue %X ----->failed",i);

	FIFO_print(&uart_FIFO);

}
