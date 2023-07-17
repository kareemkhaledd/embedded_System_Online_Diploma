/*
 ============================================================================
 Name        : C_Function_to_Print_All_Prime_Numbers_Between_Two_Numbers.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		int start,end,flag;
		printf("Enter your first number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&start);
		printf("Enter your second number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&end);
		printf("Prime numbers between %d and %d are :",start,end);
		for(int i=start;i<=end;i++){
			flag=1;
			for(int j=2;j<i;j++){
				if((i%j)==0){
					flag=0;
				}
			}
			if(flag==1)
				printf("%d  ",i);
		}
		printf("\n");
	}
}
