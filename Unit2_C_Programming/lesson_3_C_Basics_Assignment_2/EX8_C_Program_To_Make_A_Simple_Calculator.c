/*
 ============================================================================
 Name        : EX8_C_Program_To_Make_A_Simple_Calculator.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	char operator;
	while(1){
		printf("Enter operator either + or - or * or / : ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&operator);
		printf("Enter two operands : ");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&x,&y);
		fflush(stdin);fflush(stdout);
		switch(operator){
		case'+':
			printf("%d + %d = %d \n",x,y,x+y);
			break;
		case'-':
			printf("%d - %d = %d \n",x,y,x-y);
			break;
		case'*':
			printf("%d * %d = %d \n",x,y,x*y);
			break;
		case'/':
			printf("%d / %d = %d \n",x,y,x/y);
			break;
		default:
			printf("Enter a valid operator\n");
			break;

		}
	}

}
