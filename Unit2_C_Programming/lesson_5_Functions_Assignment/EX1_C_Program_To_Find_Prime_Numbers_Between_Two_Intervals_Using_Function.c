/*
 ============================================================================
 Name        : EX1_C_Program_To_Find_Prime_Numbers_Between_Two_Intervals_Using_Function.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeNumbers(int first,int secound);

int main(void) {
	int first,secound;
	printf("Enter Two Numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&first,&secound);
	primeNumbers(first,secound);
}

void primeNumbers(int first,int secound){
	int i,j,p=1;
	printf("Prime numbers between %d and %d are : ",first,secound);
	for(i=first;i<=secound;i++){
		for(j=2;j<i;j++){
			if(i%j==0)
				p=0;
		}
		if(p==1)
			printf("%d  ",i);
		p=1;
	}
}
