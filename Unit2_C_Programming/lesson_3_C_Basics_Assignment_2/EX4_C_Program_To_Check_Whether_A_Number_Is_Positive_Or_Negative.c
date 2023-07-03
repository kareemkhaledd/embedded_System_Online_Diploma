/*
 ============================================================================
 Name        : EX4_C_Program_To_Check_Whether_A_Number_Is_Positive_Or_Negative.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	while(1){
		printf("Enter a number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		if(x>0){
			printf("%d is positive\n",x);
		}else if(x<0){
			printf("%d is negative\n",x);
		}else{
			printf("You entered zero\n");
		}
	}
}
