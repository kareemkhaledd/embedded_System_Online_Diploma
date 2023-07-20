/*
 ============================================================================
 Name        : EX3_C_Program_To_Add_To_Complex_Numbers_By_Passing_Structure_To_Function.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct complexNumber{
	float real;
	float imaginary;
};
struct complexNumber add(struct complexNumber num1,struct complexNumber num2);

int main(void) {
	while(1){
		struct complexNumber num1,num2,sum;
		printf("enter the real and the imaginary parts of the first num respectively :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&num1.real,&num1.imaginary);
		printf("enter the real and the imaginary parts of the second num respectively :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&num2.real,&num2.imaginary);
		sum=add(num1,num2);
		printf("Sum=%.1f+%.1fi\n",sum.real,sum.imaginary);
	}
}
struct complexNumber add(struct complexNumber num1,struct complexNumber num2){
	struct complexNumber sum;
	sum.real=num1.real+num2.real;
	sum.imaginary=num1.imaginary+num2.imaginary;
	return sum;
}
