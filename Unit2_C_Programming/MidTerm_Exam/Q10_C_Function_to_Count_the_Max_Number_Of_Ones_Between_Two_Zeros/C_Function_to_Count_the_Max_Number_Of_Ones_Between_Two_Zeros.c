/*
 ============================================================================
 Name        : C_Function_to_Count_the_Max_Number_Of_Ones_Between_Two_Zeros.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int maxNoOfOnes(unsigned int x);
int main(void) {
	while(1){
		unsigned int x,result;
		printf("Enter an integer :");
		fflush(stdin);fflush(stdout);
		scanf("%u",&x);
		result=maxNoOfOnes(x);
		printf("Max no of ones between two zeros is :%d \n",result);
	}
}
int maxNoOfOnes(unsigned int x){
	int count=0,maxcount=0,flag=0;
	for(int i=0;i<32;i++){
		if((x&1)==0){
			flag=1;
			x=x>>1;
			if(count>maxcount){
				maxcount=count;
				count=0;
			}
			continue;
		}
		else if((x&1)==1){
			if(flag==0){
				x=x>>1;
			}else if(flag==1){
				x=x>>1;
				count++;
			}
		}

	}
	return maxcount;
}
