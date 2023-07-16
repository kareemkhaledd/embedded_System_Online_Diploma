/*
 ============================================================================
 Name        : EX3_C_Program_To_Reverse_An_Array.c
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
	int i,size,x[50],y[50];
	printf("Enter the size of your array :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter element %d :",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[i]);
	}
	reverseArray(x,y,size);
	printf("Input :");
	for(int z=0;z<size;z++){
		printf("%d  ",x[z]);
	}
	printf("\n");
	printf("output :");
	for(int z=0;z<size;z++){
		printf("%d  ",y[z]);
	}
}
void reverseArray(int x[],int y[],int size){
	int i,j;
	for(i=0,j=size-1;i<size,j>=0;i++,j--){
		y[i]=x[j];
	}
}
