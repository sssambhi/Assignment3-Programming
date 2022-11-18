
// tests file to assignment 3 REFACTOR, Q4
// PROG71985 - F22
// Naryan Sambhi - NOV 2022
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

/*
Question 4: Structs of Student IDs
o Specifications : 2.0 / 4.0 (The program produces correct results but does not display them correctly.)
—Your student structure needed to have a nested name struct within it
—A function to print an array of students was specified
o Readability : 4.0 / 4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability : 4.0 / 4.0 (The code could be reused as a whole or each routine could be reused.)
o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.)
*/


//needs nested name struct


//new refactor goals:
//accesses set,get etc ADT.
//get will return what is getting got
//setters will pass the thing being changed and the changed thing as parameters
//no direct access to teh structre member variables except within ADT implementation 



	/*
	if(GetFirstNameFromStudentWithReturn(s[0], buffer))
		printf("BUFFER: %s\n", buffer);
	if (GetMiddleNameFromStudentWithReturn(s[0], buffer))
		printf("BUFFER: %s\n", buffer);
	if (GetLastNameFromStudentWithReturn(s[0], buffer))
		printf("BUFFER: %s\n", buffer);
*/


#define _CRT_SECURE_NO_WARNINGS
#include "CreateStudent.h"
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//makes array of structs
	STUDENT s[5];

	//assigns to array
	s[0] = CreateStudent(1982, 10, 9328, "Jacky", "James", "Doe");
	
	s[1] = CreateStudent(2001, 5, 3215, "Jacob", "Fat", "Coolman");

	s[2] = CreateStudent(2005, 12, 5436, "Billy", "Bob", "Joe");

	s[3] = CreateStudent(1990, 5, 4326, "James", "Pineapple", "Bush");

	s[4] = CreateStudent(2003, 7, 1932, "Jerry", "", "Write");

	//prints array
	PrintArrayOfStudents(s);

	return 0;


}