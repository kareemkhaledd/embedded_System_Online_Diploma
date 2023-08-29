/*
 * lifo.c
 *
 *  Created on: Aug 27, 2023
 *      Author: Kareem Khaled
 */

#include "lifo.h"



LIFO_buf_status LIFO_init (LIFO_buf_t* lifo,element_type* buf,unsigned int length)
{
	if(buf==NULL)
		return LIFO_null;
	lifo->count=0;
	lifo->length=length;
	lifo->base=buf;
	lifo->head=buf;

	return LIFO_no_error;
}
LIFO_buf_status LIFO_push (LIFO_buf_t* lifo,element_type item)
{
	if(!lifo->base || !lifo->head)
		return LIFO_null;
	if(lifo->count==lifo->length)
		return LIFO_full;
	*(lifo->head)=item;
	lifo->head++;
	lifo->count++;
	return LIFO_no_error;
}
LIFO_buf_status LIFO_pop (LIFO_buf_t* lifo,element_type* item)
{
	if(!lifo->base || !lifo->head)
		return LIFO_null;
	if(lifo->count==0)
		return LIFO_empty;
	lifo->head--;
	*item=*(lifo->head);
	lifo->count--;

	return LIFO_no_error;
}
void LIFO_print(LIFO_buf_t* lifo)
{
	element_type* pprint=lifo->head;
	unsigned int i;
	printf("\n ================LIFO_PRINT===============");
	for(i=0;i<lifo->count;i++){
		pprint--;
		printf("\n %X ",*pprint);
	}
	printf("\n ========================================");
}
