/*
 ============================================================================
 Name        : EX3_C_Program_To_Reverse_A_Sentence_Using_Recrusion.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void reverseSentence(char x[],int length);

int main(void) {
	while(1){
		char x[100];
		int length;
		printf("\nEnter a sentence :");
		fflush(stdin);fflush(stdout);
		gets(x);
		length=strlen(x);
		reverseSentence(x,length);
	}
}

void reverseSentence(char x[],int length){
	printf("%c",x[length]);
	length--;
	if(length>=0)
		reverseSentence(x,length);
}
