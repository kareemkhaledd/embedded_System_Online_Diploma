/*
 ============================================================================
 Name        : EX5_C_Program_To_Search_Element_In_An_Array.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,x,a[20];
	int j=0;
	printf("Enter number of elements :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("enter elements of the array:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	while(a[j]!=x){
		j++;
	}
	printf("Number found at location : %d",j+1);
}
