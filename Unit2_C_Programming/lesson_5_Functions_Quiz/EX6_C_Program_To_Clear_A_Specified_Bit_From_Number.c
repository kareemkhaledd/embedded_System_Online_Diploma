/*
 ============================================================================
 Name        : EX6_C_Program_To_Clear_A_Specified_Bit_From_Number.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int clearBit(int x,int bit);
int main(void) {
	while(1){
		int x,bit,result;
		printf("Enter a number:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		printf("Enter the bit you want to clear :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&bit);
		result=clearBit(x,bit);
		printf("Result = %d\n",result);
	}
}
int clearBit(int x,int bit){
	return x &=~(1<<bit);
}
