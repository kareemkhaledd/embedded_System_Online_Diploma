/*
 ============================================================================
 Name        : EX6_C_Program_to_Swap_Two_Numbers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	printf("Enter value of a :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp=a;a=b;b=temp;
	printf("After swapping, value of a = %f ",a);
	printf("\nAfter swapping, value of b = %f ",b);

}
