/*
 ============================================================================
 Name        : linked_list_student_data_base.c
 Author      : Kareem Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stdint.h"
#include "string.h"
#define DPRINTF(...) {fflush(stdout); fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout); fflush(stdin);}



typedef struct {
	unsigned int id;
	unsigned char name[40];
	float height;
}Sdata;

typedef struct{
	Sdata student;
	Sdata* PNextStudent;
}Sstudent;

Sstudent* gpFirstStudent=NULL;

void Add_Student()
{
	Sstudent* pNextStudent ;
	Sstudent* pLastStudent ;
	unsigned char input_data[40];
	if(gpFirstStudent==NULL){
		pNextStudent= (Sstudent*) malloc(sizeof(Sstudent));
		gpFirstStudent=pNextStudent;
	}else{
		pLastStudent=gpFirstStudent;
		while(pLastStudent->PNextStudent){
			pLastStudent=pLastStudent->PNextStudent;
		}
		pNextStudent= (Sstudent*) malloc(sizeof(Sstudent));
		pLastStudent->PNextStudent=pNextStudent;
	}
	DPRINTF("\n Enter Student ID : ");
	gets(input_data);
	pNextStudent->student.id=atoi(input_data);

	DPRINTF("\n Enter student name : ");
	gets(pNextStudent->student.name);

	DPRINTF("\n Enter student height : ");
	gets(input_data);
	pNextStudent->student.height=atof(input_data);


	pNextStudent->PNextStudent=NULL;

}

int DeleteStudent()
{
	Sstudent* pCurrentStudent = gpFirstStudent ;
	Sstudent* pPreviousStudent =NULL;
	unsigned char input_data[40];
	unsigned int delete ;
	DPRINTF("\n Enter the ID of the student you want to delete : ");
	gets(input_data);
	delete = atoi(input_data);
	if(gpFirstStudent){
		while(pCurrentStudent){
			if(pCurrentStudent->student.id==delete){
				if(pPreviousStudent){
					pPreviousStudent->PNextStudent=pCurrentStudent->PNextStudent;
				}else{
					gpFirstStudent=pCurrentStudent->PNextStudent;
				}
				free(pCurrentStudent);
				return 1;

			}
			pPreviousStudent=pCurrentStudent;
			pCurrentStudent=pCurrentStudent->PNextStudent;
		}

	}
	DPRINTF("\n Cannot find student ID .");
	return 0;
}

void view_students ()
{
	Sstudent* pPrintStudent = gpFirstStudent ;
	int count=0;
	if(gpFirstStudent==NULL){
		DPRINTF("\n The list is empty");
	}else{
		DPRINTF("\n =========================");
		while(pPrintStudent){
			DPRINTF("\n Student record number is %d",count+1);
			DPRINTF("\n Student ID is : %d ",pPrintStudent->student.id);
			DPRINTF("\n Student name is : %s ",pPrintStudent->student.name);
			DPRINTF("\n Student height is %f ",pPrintStudent->student.height);
			DPRINTF("\n =========================");
			pPrintStudent=pPrintStudent->PNextStudent;
			count++;
		}
	}
}

void DeleteAll ()
{
	Sstudent* pCurrentStudent = gpFirstStudent ;
	Sstudent* pDeleteStudent = NULL ;
	if(gpFirstStudent==NULL){
		DPRINTF("\n The list is empty");
	}else{
		while(pCurrentStudent){
			pDeleteStudent=pCurrentStudent;
			pCurrentStudent=pCurrentStudent->PNextStudent;
			free(pDeleteStudent);

		}
		gpFirstStudent=NULL;
	}
}

int Find_N_Node ()
{
	Sstudent* pCurrentStudent = gpFirstStudent ;
	unsigned char node[10];
	unsigned int Node,count=0;
	DPRINTF("\n Enter the number of the node you want to find : ");
	gets(node);
	Node=atoi(node);
	while(pCurrentStudent){
		if(count==Node){
			DPRINTF("\n Student ID is : %d ",pCurrentStudent->student.id);
			DPRINTF("\n Student name is : %s ",pCurrentStudent->student.name);
			DPRINTF("\n Student height is %f ",pCurrentStudent->student.height);
			DPRINTF("\n =========================");
			return 1;
		}else{
			count++;
			pCurrentStudent=pCurrentStudent->PNextStudent;
		}
	}
	DPRINTF("\n cannot find node with this index ")
	return 0;
}

void Length_Of_LinkedList(){
	unsigned int count =0;
	Sstudent* pCurrentStudent = gpFirstStudent ;
	while(pCurrentStudent){
		count++;
		pCurrentStudent=pCurrentStudent->PNextStudent;
	}
	DPRINTF("\n number of elements in the linked list is : %d ",count);
}

void Last_Nth_Element ()
{
	Sstudent* pLeadingStudent = gpFirstStudent ;
	Sstudent* pReqiredStudent = gpFirstStudent ;
	unsigned char index[10];
	unsigned int n,i;
	DPRINTF("\n Enter the index of the element you want starting from the last element :");
	gets(index);
	n=atoi(index);
	for(i=0;i<n;i++){
		pLeadingStudent=pLeadingStudent->PNextStudent;
	}
	while(pLeadingStudent){
		pLeadingStudent=pLeadingStudent->PNextStudent;
		pReqiredStudent=pReqiredStudent->PNextStudent;
	}
	DPRINTF("\n Student ID is : %d ",pReqiredStudent->student.id);
	DPRINTF("\n Student name is : %s ",pReqiredStudent->student.name);
	DPRINTF("\n Student height is %f ",pReqiredStudent->student.height);
	DPRINTF("\n =========================");

}
void Middle_Element()
{
	Sstudent* pFast = gpFirstStudent ;
	Sstudent* pSlow = gpFirstStudent ;
	while(pFast->PNextStudent){
		pSlow=pSlow->PNextStudent;
		pFast=(pFast->PNextStudent);
		if(pFast->PNextStudent==NULL)
			break;
		pFast=(pFast->PNextStudent);
	}
	DPRINTF("\n Student ID is : %d ",pSlow->student.id);
	DPRINTF("\n Student name is : %s ",pSlow->student.name);
	DPRINTF("\n Student height is %f ",pSlow->student.height);
	DPRINTF("\n =========================");
}


int main(void) {
	unsigned char choise[10];
	while(1){
		DPRINTF("\n ============================");
		DPRINTF("\n Choose one of the following options : ");
		DPRINTF("\n 1:Add_Student ");
		DPRINTF("\n 2:DeleteStudent ");
		DPRINTF("\n 3:view_students ");
		DPRINTF("\n 4:DeleteAll ");
		DPRINTF("\n 5:Find_N_Node ");
		DPRINTF("\n 6:Length_Of_LinkedList ");
		DPRINTF("\n 7:Last_Nth_Element :  ");
		DPRINTF("\n 8:Middle_Element :  ");
		DPRINTF("\n Enter option number : ");
		gets(choise);
		DPRINTF("\n ============================");
		switch (atoi(choise))
		{
		case 1:
			Add_Student();
			break;
		case 2:
			DeleteStudent();
			break;
		case 3:
			view_students();
			break;
		case 4:
			DeleteAll();
			break;
		case 5:
			Find_N_Node();
			break;
		case 6:
			Length_Of_LinkedList();
			break;
		case 7:
			Last_Nth_Element();
			break;
		case 8:
			Middle_Element();
			break;
		default:
			DPRINTF("\n wrong option ");
			break;
		}
	}
}
