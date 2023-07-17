/*
 ============================================================================
 Name        : C_Function_to_take_an_Integer_Number_and_Calculate_its_Square_Root.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main(void) {
	while(1){
		float x,result;
		printf("Enter a number : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&x);
		result=sqrt(x);
		printf("Square root of %.0f is =%.3f \n",x,result);
	}
}
