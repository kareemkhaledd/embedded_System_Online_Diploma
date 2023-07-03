/*
 ============================================================================
 Name        : EX6_C_Program_To_Calculate_Sum_Of_Natural_Numbers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i,sum=0;
	while(1){
		printf("Enter an integer :\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		for(i=1;i<=x;i++){
			sum+=i;
		}
		printf("The sum is : %d \n",sum);
		sum=0;
	}
}
