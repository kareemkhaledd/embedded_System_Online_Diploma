/*
 ============================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0,y=0;
	int sum;
	printf("Enter Two Integers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x ,&y);
	sum=x+y;
	fflush(stdin);fflush(stdout);
	printf("\nThe sum of the two integers is %d",sum);
}
