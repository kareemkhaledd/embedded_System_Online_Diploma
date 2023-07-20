/*
 ============================================================================
 Name        : EX1_C_Program_To_Store_Information_Of_A_Student_Using_Structure.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sstudent{
	char name[100];
	int roll;
	float marks;
};
struct sstudent getStudentInfo();
void printStudentInfo(struct sstudent x);

int main(void) {
	struct sstudent student1;
	student1=getStudentInfo();
	printStudentInfo(student1);
}
struct sstudent getStudentInfo(){
	struct sstudent student1;
	printf("Enter name :");
	fflush(stdin);fflush(stdout);
	gets(student1.name);
	printf("Enter roll :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student1.roll);
	printf("Enter marks :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&student1.marks);
	printf("\n");
	return student1;
}
void printStudentInfo(struct sstudent x){
	printf("Displaying Information :\n");
	printf("Name : %s\n",x.name);
	printf("Roll : %d\n",x.roll);
	printf("Mark : %.2f\n",x.marks);
}
