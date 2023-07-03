/*
 ============================================================================
 Name        : EX5_C_Program_To_Check_Whether_A_Character_Is_An_Alphabet_Or_Not.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	while(1){
		printf("Enter a character :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&x);
		if((x>=97 && x<=122) ||(x>=65 && x<=90)){
			printf("%c is an alphabet\n",x);
		}else{
			printf("%c is not an alphabet\n",x);
		}
	}
}
