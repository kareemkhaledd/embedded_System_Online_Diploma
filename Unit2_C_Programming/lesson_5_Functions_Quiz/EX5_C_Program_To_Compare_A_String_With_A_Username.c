/*
 ============================================================================
 Name        : EX5_C_Program_To_Compare_A_String_With_A_Username.c
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
		char name[100],x[100];
		int result;
		printf("Enter a string :");
		fflush(stdin);fflush(stdout);
		gets(x);
		printf("Enter your name :");
		fflush(stdin);fflush(stdout);
		gets(name);
		result=stricmp(x,name);
		if(result==0)
			printf("Welcome %s your name exist\n",name);
		else
			printf("Your name doesn't exist\n");
	}
}
