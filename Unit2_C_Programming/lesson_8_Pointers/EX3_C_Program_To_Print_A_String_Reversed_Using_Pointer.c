/*
 ============================================================================
 Name        : EX3_C_Program_To_Print_A_String_Reversed_Using_Pointer.c
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
	while(1){
		char x[100];
		int length,i;
		char *ptr;
		printf("Input a string :");
		fflush(stdin);fflush(stdout);
		gets(x);
		length=strlen(x)-1;
		ptr=&x[length];
		printf("Reversed string is :");
		for(i=length;i>=0;i--){
			printf("%c",*ptr);
			ptr--;
		}
		printf("\n");
	}
}
