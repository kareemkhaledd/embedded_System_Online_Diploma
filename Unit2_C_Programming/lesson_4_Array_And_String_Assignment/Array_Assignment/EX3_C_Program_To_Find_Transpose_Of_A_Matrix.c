/*
 ============================================================================
 Name        : EX2_C_Program_To_Find_Transpose_Of_A_Matrix.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r,c,i,j;
	int a[10][10],b[10][10];
	printf("Enter rows and columns of matrix :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("enter elements of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a%d%d :",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	printf("Entered Matrix :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Of Matrix :\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

}
