/*
 ============================================================================
 Name        : EX2_C_Program_To_Add_Two_Distances_Using_Inch_Feet_System_With_Structure.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdistance{
	int feet;
	float inch;
};
int main(void) {
	struct Sdistance d1,d2,sum;
	printf("Enter informations of the first distance \n");
	printf("Enter feet :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter informations of the secound distance \n");
	printf("Enter feet :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);
	sum.inch=d1.inch+d2.inch;
	sum.feet=d1.feet+d2.feet;
	if(sum.inch>=12){
		sum.inch=sum.inch-12;
		++sum.feet;
	}
	printf("Sum of distances : %d'-%.1f\"",sum.feet,sum.inch);
}
