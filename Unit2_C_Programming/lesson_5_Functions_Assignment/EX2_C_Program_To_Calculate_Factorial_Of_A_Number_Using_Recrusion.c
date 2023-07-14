/*
 ============================================================================
 Name        : EX2_C_Program_To_Calculate_Factorial_Of_A_Number_Using_Recrusion.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fac=1;
int factorial(int x);

int main(void) {
	while(1){
		int x,result;
		fac=1;
		printf("Enter a positive number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		result=factorial(x);
		printf("Factorial of %d is : %d \n",x,result);
	}
}

int factorial(int x){
	fac*=x;
	x--;
	if(x>0)
		factorial(x);
	return fac;
}
