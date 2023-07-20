/*
 ============================================================================
 Name        : EX5_C_Program_To_Find_Area_Of_A_Circle.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
float circleArea(float radius);
int main(void) {
	while(1){
		float radius,area;
		printf("Enter the radius of the circle :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&radius);
		area=circleArea(radius);
		printf("Area = %.3f\n",area);
	}
}
float circleArea(float radius){
	return PI*radius*radius;
}
