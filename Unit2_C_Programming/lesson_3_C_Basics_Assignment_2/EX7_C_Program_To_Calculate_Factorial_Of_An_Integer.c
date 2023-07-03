/*
 ============================================================================
 Name        : EX7_C_Program_To_Calculate_Factorial_Of_An_Integer.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,x;
	int factorial;
	while(1){
		factorial=1;
		printf("Enter an integer :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		if(x==0){
			printf("Factorial = %d \n",factorial);
		}else if(x<0){
			printf("Error!!!Factorial of negative integer doesn't exist\n");
		}else{
			for(i=1;i<=x;i++){
				factorial*=i;
			}
			printf("Factorial = %d \n",factorial);
		}
	}
}
