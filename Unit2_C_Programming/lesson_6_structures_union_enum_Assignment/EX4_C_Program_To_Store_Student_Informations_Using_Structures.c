/*
 ============================================================================
 Name        : EX4_C_Program_To_Store_Student_Informations_Using_Structures.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sstudent{
	char name[100];
	int roll;
	int marks;
};
struct Sstudent getStudentInfo();
void printStudentInfo(struct Sstudent);
int main(void) {
	struct Sstudent students[10];
	for(int i=0;i<10;i++){
		students[i]=getStudentInfo();
	}
	for(int i=0;i<10;i++){
		printStudentInfo(students[i]);
	}

}

struct Sstudent getStudentInfo(){
	struct Sstudent student;
	printf("Enter name :");
	fflush(stdin);fflush(stdout);
	gets(student.name);
	printf("Enter roll :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student.roll);
	printf("Enter marks :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student.marks);
	printf("\n");
	return student;
}
void printStudentInfo(struct Sstudent x){
	printf("Displaying Information :\n");
	printf("Name : %s\n",x.name);
	printf("Roll : %d\n",x.roll);
	printf("Mark : %d\n",x.marks);
}
