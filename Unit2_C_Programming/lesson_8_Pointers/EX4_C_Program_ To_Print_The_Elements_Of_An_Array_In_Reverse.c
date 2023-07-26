/*
 ============================================================================
 Name        : EX4_C_Program_.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x[15],size,i;
	int *ptr=x;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	printf("Input elements of your array :\n");
	for(i=0;i<size;i++){
		printf("element %d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[i]);
	}
	printf("Reversed array:\n");
	ptr=ptr+size-1;
	for(i=size-1;i>=0;i--){
		printf("Element %d :%d \n",i+1,*ptr);
		ptr--;
	}

}
