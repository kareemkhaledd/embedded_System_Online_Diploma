/*
 ============================================================================
 Name        : EX1_C_Program_To_Find_Sum_Of_2x2_Matrix.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2],b[2][2];
	int i,j;
	while(1){
		printf("Enter the elements of first matrix:\n");
		fflush(stdin);fflush(stdout);
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Enter a%d%d :",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&a[i][j]);
				printf("\n");
			}
		}
		fflush(stdin);fflush(stdout);
		printf("Enter the elements of second matrix:\n");
		fflush(stdin);fflush(stdout);
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Enter b%d%d :",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);
				printf("\n");
			}
		}
		printf("Sum of Matrices is:\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("%.2f \t",a[i][j]+b[i][j]);
			}
			printf("\r\n");
		}
	}
}
