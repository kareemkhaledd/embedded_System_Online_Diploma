/*
 ============================================================================
 Name        : C_Function_to_Take_a_Number_and_Sum_all_Digits.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int x);
int main(void) {
	while(1){
		int x,result;
		printf("Enter a number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		result=sum(x);
		printf("Sum of all digits is : %d\n",result);
	}
}
int sum(int x){
	int k,sum=0;
	while(x!=0){
		k=x%10;
		sum+=k;
		x=x/10;
	}
	return sum;
}
