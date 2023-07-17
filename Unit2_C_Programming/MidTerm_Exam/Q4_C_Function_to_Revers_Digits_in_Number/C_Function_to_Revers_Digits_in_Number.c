/*
 ============================================================================
 Name        : C_Function_to_Revers_Digits_in_Number.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int reverseDigits(int x);
int main(void) {
	while(1){
		int x,result;
		printf("Enter a number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		result=reverseDigits(x);
		printf("The number with its digits reversed is : %d\n",result);
	}
}
int reverseDigits(int x){
	int acc=0;
	while(x!=0){
		acc=acc*10;
		acc=acc+x%10;
		x=x/10;
	}
	return acc;
}
