/*
 ============================================================================
 Name        : EX2_C_Program_to_Print_a_Integer_Entered_by_a_User.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	printf("\nThe number you entered is : %d ",x);
}
