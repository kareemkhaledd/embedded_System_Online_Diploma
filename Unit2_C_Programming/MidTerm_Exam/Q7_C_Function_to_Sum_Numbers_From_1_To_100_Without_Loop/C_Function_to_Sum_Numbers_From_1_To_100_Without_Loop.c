/*
 ============================================================================
 Name        : C_Function_to_Sum_Numbers_From_1_To_100_Without_Loop.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int x=1,acc;

int main(void) {
	acc+=x;
	x++;
	if(x<=100)
		main();
	else
		printf("sum of numbers between 1 and 100 is = %d",acc);
}
