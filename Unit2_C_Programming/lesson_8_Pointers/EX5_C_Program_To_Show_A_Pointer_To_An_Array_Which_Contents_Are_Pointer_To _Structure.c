/*
 ============================================================================
 Name        : EX5_C_Program_To_Show_A_Pointer_To_An_Array_Which_Contents_Are_Pointer_To.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct semployee{
	char name[100];
	int id;
};

int main(void) {
	struct semployee emp1={"kareem",91},emp2={"Ahmed",79},emp3={"Hana",10};
	struct semployee (* arr[])={&emp1,&emp2,&emp3};
	struct semployee*(*ptr_to_array)[3]=&arr;
	for(int i=0;i<3;i++){
		printf("Employee name is: %s \n",(*((*ptr_to_array)+i))->name);
		printf("Employee id is:%d \n",(*((*ptr_to_array)+i))->id);
	}
}
