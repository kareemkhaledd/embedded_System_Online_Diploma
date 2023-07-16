/*
 ============================================================================
 Name        : EX4_C_Program_To_Check_If_A_Number_Is_Power_Of_3.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int isPowerOf3(int x);
int main(void) {
	while(1){
		int x,result;
		printf("Enter the number you want to check :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		result=isPowerOf3(x);
		if(result==0)
			printf("%d is power of 3\n",x);
		else
			printf("%d is not power of 3\n",x);
	}
}
int isPowerOf3(int x){
	double k;
	k=log(x)/log(3);
	if(k==trunc(k))
		return 0;
	else
		return 1;
}
