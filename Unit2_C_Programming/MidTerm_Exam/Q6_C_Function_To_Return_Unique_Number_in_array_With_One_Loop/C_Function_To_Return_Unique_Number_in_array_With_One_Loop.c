/*
 ============================================================================
 Name        : C_Function_To_Return_Unique_Number_in_array_With_One_Loop.c
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
		int size,x[100],f[100],count=0;
		printf("Enter the size of your array :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&size);
		printf("Enter the elements of your array :\n");
		fflush(stdin);fflush(stdout);
		for(int i=0;i<size;i++){
			printf("Element no %d :",i);
			fflush(stdin);fflush(stdout);
			scanf("%d",&x[i]);
			f[i]=0;
		}
		for(int i=0;i<size;i++){
			count=0;
			for(int j=0;j<size;j++){
				if(j==i)
					continue;
				else if(x[i]==x[j]){
					count++;
				}
			}
			f[i]=count;
		}
		printf("Unique elements in your array are :");
		for(int i=0;i<size;i++){
			if(f[i]==0)
				printf("%d  ",x[i]);
			else
				continue;
		}
		printf("\n");

	}
}
