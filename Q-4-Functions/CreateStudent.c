
// function file to assignment 3 question 4
// PROG71985 - F22
// Naryan Sambhi - oct 2022
//
// 
// 
// 
// 
// goal:
// write a program that creates a structure template with two members
// according to the following criteria: 
// 
// • the first member is a student number as a single fixed length field 
//     (follow1ing the format of 10 digits:
//     YYYYMMwxyz YYYY = birthyear, MM = birth month, wxyz = random 4 digit code).
// 
// • the second member is a structure with three members according to the following criteria :
//		   – first member is ”first name”
//		   – second member is ”middle name”
//		   – third member is ”last name”
//
// write and test a program that creates and initializes an array of five of these structures (pretend names)
// two students with middle names (full middle name must be entered) and at leat 1 without middle names
//
// write a single function that accepts the array of structures as a parameter for printing the array of data
// in following format; 
//							2001041234 – LastName, FirstName MiddleInitial.
// 
// *only intial of middle name should be printed followed by a .
// without middle name ends output line at end of the first name


#define _CRT_SECURE_NO_WARNINGS


#include "CreateStudent.h"
#include <stdio.h>
#include <string.h>

//using structs to create student profile 
STUDENT CreateStudent(int Birthyear, int Birthmonth, int Random_code, char* First_name, char* Middle_name, char* Last_name)
{
	STUDENT s;

	s.birthyear = Birthyear;
	s.birthmonth = Birthmonth;
	s.random_code = Random_code;

	strncpy(s.student.first_name, First_name, MAXSIZE);
	strncpy(s.student.middle_name, Middle_name, MAXSIZE);
	strncpy(s.student.last_name, Last_name, MAXSIZE);

	return s;
}


//print name
void PrintStudent(STUDENT s)
{
	if (strlen(s.student.middle_name) > 0)
		printf("STUDENT: %d%02d%d - %s, %s %.1s.\n", s.birthyear, s.birthmonth, s.random_code, s.student.last_name, s.student.first_name, s.student.middle_name);
	else
	printf("STUDENT: %d%02d%d - %s, %s\n", s.birthyear, s.birthmonth, s.random_code, s.student.last_name, s.student.first_name);
}
		//	2001041234 – LastName, FirstName MiddleInitial.


bool GetFirstNameFromStudentWithReturn(STUDENT s, char* buffer)
{
	strncpy(buffer, s.student.first_name, MAXSIZE);
	buffer[MAXSIZE - 1] = '\0';

	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}

bool GetMiddleNameFromStudentWithReturn(STUDENT s, char* buffer)
{
	strncpy(buffer, s.student.middle_name, MAXSIZE);
	buffer[MAXSIZE - 1] = '\0';

	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}

bool GetLastNameFromStudentWithReturn(STUDENT s, char* buffer)
{
	strncpy(buffer, s.student.last_name, MAXSIZE);
	buffer[MAXSIZE - 1] = '\0';

	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}


PrintArrayOfStudents(STUDENT s[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("\n~~~\n");
		printf("Student Number: %d%02d%d\n", s[i].birthyear, s[i].birthmonth, s[i].random_code);
		
		if (strlen(s[i].student.middle_name) > 0)
			printf("Name: %s, %s, %.1s.\n", s[i].student.last_name, s[i].student.first_name, s[i].student.middle_name);
		else
			printf("Name: %s, %s\n", s[i].student.last_name, s[i].student.first_name);

	}
}

//	2001041234 – LastName, FirstName MiddleInitial.
