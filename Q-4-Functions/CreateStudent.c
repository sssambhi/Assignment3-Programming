
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



#include "CreateStudent.h"
#include <stdio.h>

//using structs to create student profile 
STUDENT CreateStudent(int Birthyear, int Birthmonth, int Random_code, char* First_name, char* Middle_name, char* Last_name)
{
	STUDENT student;

	student.birthyear = Birthyear;
	student.birthmonth = Birthmonth;
	student.random_code = Random_code;

	strncpy(student.first_name, First_name, MAXSIZE);
	strncpy(student.middle_name, Middle_name, MAXSIZE);
	strncpy(student.last_name, Last_name, MAXSIZE);

	return student;
}

//print name
void PrintStudent(STUDENT student)
{
	printf("STUDENT: %d%02d%d - %s, %s %.1s.\n", student.birthyear, student.birthmonth, student.random_code, student.last_name, student.first_name, student.middle_name);
}
		//	2001041234 – LastName, FirstName MiddleInitial.

