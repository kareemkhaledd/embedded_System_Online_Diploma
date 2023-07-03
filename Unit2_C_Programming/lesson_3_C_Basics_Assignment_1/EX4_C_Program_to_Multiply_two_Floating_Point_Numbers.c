/*
 ============================================================================
 Name        : EX4_C_Program_to_Multiply_two_Floating_Point_Numbers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0,y=0;
	float product;
	printf("Enter two floating point numbers :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	fflush(stdin);fflush(stdout);
	product=x*y;
	printf("The product of the two numbers is : %f",product);
}
