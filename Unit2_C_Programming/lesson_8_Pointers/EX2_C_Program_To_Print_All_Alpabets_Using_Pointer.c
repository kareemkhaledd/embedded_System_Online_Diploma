/*
 ============================================================================
 Name        : EX2_C_Program_To_Print_All_Alpabets_Using_Pointer.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char alphabet[27];
	char* ptr=alphabet;
	for(i=0;i<26;i++){
		*ptr='A'+i;
		ptr++;
	}
	ptr=alphabet;
	printf("The alphabets are : \n");
	for(i=0;i<26;i++){
		printf("%c   ",*ptr);
		ptr++;
	}
}
