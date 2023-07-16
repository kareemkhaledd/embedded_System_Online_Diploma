/*
 ============================================================================
 Name        : EX2_C_Program_To_Find_The_Fourth_Least_segnificant_Bit_In_Number.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int num(int x);
int main(void) {
	int x,result;
	printf("Enter the number you want to find its least 4th significant bit :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	result=num(x);
	printf("the 4th least significant bit is : %x ",result);
}
int num(int x){
	return (x&(1<<3))>>3;
}
