/*
 ============================================================================
 Name        : EX1_C_Program_To_Demonstrate_How_To_Handle_Pointers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *ab;
	int m;
	m=29;
	ab=&m;
	printf("The address of m is :0x%p \n",&m);
	printf("The content of m is :%d \n",m);
	printf("Address of pointer ab is :0x%p \n",ab);
	printf("content of pointer ab is :%d \n",*ab);
	m=34;
	printf("The value of m is assigned to 34 now \n");
	printf("Address of pointer ab is :0x%p \n",ab);
	printf("content of pointer ab is :%d \n",*ab);
	*ab=7;
	printf("The pointer variable ab is assigned to 7 now \n");
	printf("Address of pointer ab is :0x%p \n",ab);
	printf("content of pointer ab is :%d \n",*ab);
}
