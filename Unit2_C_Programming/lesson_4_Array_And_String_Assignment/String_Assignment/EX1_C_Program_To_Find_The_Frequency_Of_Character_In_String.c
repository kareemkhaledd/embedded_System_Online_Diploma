/*
 ============================================================================
 Name        : EX1_C_Program_To_Find_The_Frequency_Of_Character_In_String.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(void) {
	char c,x[100];
	int i,j;
	while(1){
		j=0;i=0;
		printf("Enter a string :\n");
		fflush(stdin);fflush(stdout);
		gets(x);
		printf("Enter a character :\n");
		fflush(stdin);fflush(stdout);
		scanf("%c",&c);
		while(x[i]!=0){
			if(x[i]==c){
				j++;
			}
			i++;
		}
		printf("Frequency = %d\n",j);
	}
}
