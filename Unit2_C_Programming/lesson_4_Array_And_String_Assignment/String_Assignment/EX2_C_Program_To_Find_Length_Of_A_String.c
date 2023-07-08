/*
 ============================================================================
 Name        : EX2_C_Program_To_Find_Length_Of_A_String.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s[100];
	int i;
	while(1){
		i=0;
		printf("Enter a string :\n");
		fflush(stdin);fflush(stdout);
		gets(s);
		while(s[i]!=0){
			i++;
		}
		printf("Length Of String is = %d\n",i);
	}
}
