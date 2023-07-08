/*
 ============================================================================
 Name        : EX3_C_Program_To_Reverse_A_String.c
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
	char x[100];
	int l,i;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(x);
	l=(int)strlen(x);
	printf("Reverse String is :");
	for(i=l;i>=0;i--){
		printf("%c",x[i]);
	}
}
