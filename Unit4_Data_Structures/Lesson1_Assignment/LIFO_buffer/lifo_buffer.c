/*
 ============================================================================
 Name        : lifo_buffer.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "lifo.h"

int main(void) {
	element_type i,temp;
	element_type buf[5];
	LIFO_buf_t uart_lifo;
	LIFO_init(&uart_lifo,buf,5);
	for(i=0;i<7;i++){
		if(LIFO_push(&uart_lifo,i)==LIFO_no_error)
			printf("\n LIFO_push %X ----->done",i);
		else
			printf("\n LIFO_push %X ----->failed",i);
	}
	LIFO_print(&uart_lifo);
	if(LIFO_pop(&uart_lifo,&temp)==LIFO_no_error)
		printf("\n LIFO_pop %X ----->done",temp);
	else
		printf("\n LIFO_push %X ----->failed",i);
	if(LIFO_pop(&uart_lifo,&temp)==LIFO_no_error)
		printf("\n LIFO_pop %X ----->done",temp);
	else
		printf("\n LIFO_push %X ----->failed",i);

	LIFO_print(&uart_lifo);

}
