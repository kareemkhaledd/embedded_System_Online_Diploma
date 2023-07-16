/*
 ============================================================================
 Name        : EX8_C_Program_To_Convert_Ascii_Decimal_To_A_Number.c
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
		int x;
		printf("Enter ASCII of an integer :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		printf("The number you entered is : %c\n",x);
	}
}
