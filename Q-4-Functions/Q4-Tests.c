
// tests file to assignment 3, Q4
// PROG71985 - F22
// Naryan Sambhi - oct 2022
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

int main(void)
{

//same entry for different students created, printed then repeated.
	STUDENT Jacky = CreateStudent(1982, 10, 9328, "Jacky", "James", "Doe");

	PrintStudent(Jacky);



	STUDENT Jacob = CreateStudent(2001, 5, 3215, "Jacob", "Fat", "Coolman");

	PrintStudent(Jacob);



	STUDENT Billy = CreateStudent(2005, 12, 5436, "Billy", "Bob", "Joe");

	PrintStudent(Billy);



	STUDENT James = CreateStudent(1990, 5, 4326, "James", "Pineapple", "Bush");

	PrintStudent(James);



	STUDENT Ozzy = CreateStudent(2003, 7, 1932, "Ozzy", "", "Wineglass");

	PrintStudent(Ozzy);

	return 0;


}