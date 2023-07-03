/*
 ============================================================================
 Name        : EX3_C_Program_To_Find_The_Largest_Between_Two_Numbers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,z;
	printf("Enter three numbers :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d %d",&x,&y,&z);
	if(x>y){
		if(x>z){
			printf("%d is the largest",x);
		}else{
			printf("%d is the largest",z);
		}
	}else{
		if(y>z){
			printf("%d is the largest",y);
		}else{
			printf("%d is the largest",z);
		}
	}
}
