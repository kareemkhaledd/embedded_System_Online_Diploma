/*
 ============================================================================
 Name        : EX4_C_Program_To_Insert_An_Element_In_An_Array.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,l,i,x,a[20],b[20];
	int j=0;
	printf("Enter number of elements:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);fflush(stdout);
	printf("enter elements of the array:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter element to be inserted:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	printf("enter the location:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&l);
	while(j!=l-1){
		b[j]=a[j];
		j++;
	}
	b[j]=x;
	while(j<n){
		b[j+1]=a[j];
		j++;
	}
	printf("The new array :\n");
	for(i=0;i<n+1;i++){
		printf("%d\t",b[i]);
	}
}
