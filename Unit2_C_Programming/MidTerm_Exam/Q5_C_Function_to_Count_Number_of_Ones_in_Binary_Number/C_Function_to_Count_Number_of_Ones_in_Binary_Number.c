/*
 ============================================================================
 Name        : C_Function_to_Count_Number_of_Ones_in_Binary_Number.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int noOfOnes(int x);
int main(void) {
	while(1){
		int x,result;
		printf("Enter a number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		result=noOfOnes(x);
		printf("No of ones is: %d\n",result);
	}
}
int noOfOnes(int x){
	int count =0,n=0x1;
	for(int i=0;i<31;i++){
		if(((x&n)>>i)==1){
			count++;
			n=n<<1;
		}else{
			n=n<<1;
			continue;
		}
	}
	return count;
}
