/*
 ============================================================================
 Name        : EX2_C_Program_To_Calculate_Average_Using_Arrays.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float data[100];
	float sum=0;
	int n,i;
	printf("Enter The Number Of Data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter number :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&data[i]);
	}
	for(i=0;i<n;i++){
		sum+=data[i];
	}
	printf("Average = %.2f",sum/n);
}
