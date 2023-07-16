/*
 ============================================================================
 Name        : EX7_C_Program_To_Swap_Two_Arrays_Of_Diffrent_sizes.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void swapArray(int x[],int y[],int sizeX,int sizeY);
int main(void) {
	int i,sizeX,sizeY,x[50],y[50];
	printf("Enter the size of your first array :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&sizeX);
	printf("Enter your first array :\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<sizeX;i++){
		printf("Enter element %d :",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[i]);
	}
	fflush(stdin);fflush(stdout);
	printf("Enter the size of your second array :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&sizeY);
	printf("Enter your second array :\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<sizeY;i++){
		printf("Enter element %d :",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&y[i]);
	}
	printf("Arrays before swapping :\n");
	printf("x = ");
	for(i=0;i<sizeX;i++){
		printf("%d  ",x[i]);
	}
	printf("\n");
	fflush(stdin);fflush(stdout);
	printf("y = ");
	for(i=0;i<sizeY;i++){
		printf("%d  ",y[i]);
	}
	printf("\n");
	swapArray(x,y,sizeX,sizeY);
	printf("Arrays after swapping :\n");
	printf("x = ");
	for(i=0;i<sizeY;i++){
		printf("%d  ",x[i]);
	}
	printf("\n");
	fflush(stdin);fflush(stdout);
	printf("y = ");
	for(i=0;i<sizeX;i++){
		printf("%d  ",y[i]);
	}
}
void swapArray(int x[],int y[],int sizeX,int sizeY){
	int i,j,temp[50];
	for(i=0;i<50;i++){
		temp[i]=x[i];
		x[i]=y[i];
		y[i]=temp[i];
	}
}
