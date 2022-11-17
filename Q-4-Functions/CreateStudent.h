#pragma once
#include <stdbool.h>

// header file to assignment 3, question 4
// PROG71985 - F22
// Naryan Sambhi - oct 2022

//max size of names
#define MAXSIZE  10

//struct student
typedef struct student
{
	//struct for student numbers 

	int birthyear;
	int birthmonth;
	int random_code;

	char first_name[MAXSIZE];
	char middle_name[MAXSIZE];
 	char last_name[MAXSIZE];

} STUDENT;

STUDENT CreateStudent(int birthyear, int birthmonth, int radom_code, char* First_name, char* Middle_name, char* Last_name);

//bool GetNameWithReturn(STUDENT, char*);

void PrintStudent(STUDENT student);

