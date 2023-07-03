/*
 ============================================================================
 Name        :EX2_C_Program_To_Check_Vowel_Or_Constant.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char x;
	while(1){
		printf("Enter a character :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&x);
		if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'){
			printf("%c is a vowel\n",x);
		}else{
			printf("%c is a constant\n",x);
		}
	}
}

