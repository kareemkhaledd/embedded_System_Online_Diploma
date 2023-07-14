/*
 ============================================================================
 Name        : EX4_C_Program_To_Calcaulate_The_Power_Of_A_Number_Using_Recrusion.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int z;
int power(int base,int pow);

int main(void) {
	while(1){
		int base,pow,result;
		z=1;
		printf("Enter base number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&base);
		printf("Enter power number(positive integer):");
		fflush(stdin);fflush(stdout);
		scanf("%d",&pow);
		result=power(base,pow);
		printf("%d ^ %d=%d \n",base,pow,result);
	}
}

int power(int base,int pow){
	z*=base;
	pow--;
	if(pow>0)
		power(base,pow);
	return z;
}
