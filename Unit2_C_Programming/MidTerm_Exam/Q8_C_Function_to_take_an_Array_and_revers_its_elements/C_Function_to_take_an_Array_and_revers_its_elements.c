/*
 ============================================================================
 Name        : C_Function_to_take_an_Array_and_revers_its_elements.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverseArray(int x[],int y[],int size);
int main(void) {
	while(1){
		int size,x[100],y[100];
		printf("Enter the size of your array :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&size);
		printf("Enter the elements of your array :\n");
		fflush(stdin);fflush(stdout);
		for(int i=0;i<size;i++){
			printf("Element no %d :",i);
			fflush(stdin);fflush(stdout);
			scanf("%d",&x[i]);
		}
		reverseArray(x,y,size);
		printf("Array :");
		for(int i=0;i<size;i++){
			printf("%d  ",x[i]);
		}
		printf("\n");
		printf("Reversed array :");
		for(int i=0;i<size;i++){
			printf("%d  ",y[i]);
		}
		printf("\n");
	}
}
void reverseArray(int x[],int y[],int size){
	int i,j;
	for(i=0,j=size-1;i<size&&j>=0;i++,j--){
		y[i]=x[j];
	}
}
