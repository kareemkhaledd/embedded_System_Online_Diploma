/*
 * fifo.c
 *
 *  Created on: Aug 27, 2023
 *      Author: Kareem Khaled
 */

#include "fifo.h"

FIFO_buf_status FIFO_init (FIFO_buf_t* fifo,element_type* buf,unsigned int length)
{
	if(buf==NULL)
		return FIFO_null;
	fifo->length=length;
	fifo->count=0;
	fifo->base=buf;
	fifo->head=buf;
	fifo->tail=buf;

	return FIFO_no_error;
}
FIFO_buf_status FIFO_enqueue (FIFO_buf_t* fifo,element_type item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	if(FIFO_FULL(fifo)==FIFO_full)
		return FIFO_full;
	*(fifo->head)=item;
	fifo->count++;
	if(fifo->head ==((fifo->base)+(fifo->length * sizeof(element_type))))
		fifo->head=fifo->base;
	else
		fifo->head++;

	return FIFO_no_error;

}
FIFO_buf_status FIFO_dequeue (FIFO_buf_t* fifo,element_type* item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	if(fifo->count==0)
		return FIFO_empty;
	*item=*(fifo->tail);
	fifo->count--;
	if(fifo->tail ==((fifo->base)+(fifo->length * sizeof(element_type))))
		fifo->tail=fifo->base;
	else
		fifo->tail++;

	return FIFO_no_error;

}
FIFO_buf_status FIFO_FULL (FIFO_buf_t* fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	if(fifo->count==fifo->length)
		return FIFO_full;
	else
		return FIFO_no_error;
}
void FIFO_print(FIFO_buf_t* fifo)
{
	element_type* pprint=fifo->tail;
	unsigned int i;
	printf("\n ===================FIFO_PRINT=================");
	if(fifo->count==0)
		printf("FIFO is empty");
	else{
		for(i=0;i<fifo->count;i++){
			printf("\n %X  ",*pprint);
			if(pprint==((fifo->base)+(fifo->length * sizeof(element_type))))
				pprint=fifo->base;
			else
				pprint++;
		}
	}
	printf("\n ===============================================");
}

