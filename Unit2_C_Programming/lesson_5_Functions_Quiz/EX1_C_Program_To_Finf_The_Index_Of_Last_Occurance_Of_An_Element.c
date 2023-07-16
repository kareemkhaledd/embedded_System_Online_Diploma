/*
 ============================================================================
 Name        : EX1_C_Program_To_Finf_The_Index_Of_Last_Occurance_Of_An_Element.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int lastOccurrenceOf(int x[],int size,int find);
int main(void) {
	int result,i,size,find,x[50];
	printf("Enter the size of your array :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter element %d :",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[i]);
	}
	printf("Enter the number you want to find the last index of :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&find);
	result=lastOccurrenceOf(x,size,find);
	printf("Last occurrence is : %d",result);
}

int lastOccurrenceOf(int x[],int size,int find){
	int i;
	for(i=size-1;i>=0;i++){
		if(x[i]==find)
			return i;
	}
	return -1;
}
