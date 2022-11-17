
// tests file to assignment 3 REFACTOR, Q3
// PROG71985 - F22
// Naryan Sambhi - NOV 2022
//
// goal, 
// partitioned testing of different types of numbers for assignment 3 question 3
// function is to multiple each element of an array with another into a third sepperate array

//REFACTOR
/*
Question 3: Multiply elements of 2 arrays into 3rd and test
o Specifications: 4.0/4.0 (The program works and meets all of the specifications.)
o Readability: 4.0/4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability: 4.0/4.0 (The code could be reused as a whole or each routine could be reused.)
o Documentation: 4.0/4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.)
*/

#include "MultiplyTwoArraysIntoThird.h"
#include <stdio.h>
#define ARRAYSIZE 3

int main(void)
{

	//test 1:  simple array

	double test1_array1[ARRAYSIZE] = { 1,2,3 };
	double test1_array2[ARRAYSIZE] = { 1,2,3 };
	double test1_array3[ARRAYSIZE];

	printf("\ntest 1: simple array\n");

	MultiplyTwoArraysIntoThird(test1_array1, test1_array2, test1_array3, ARRAYSIZE);
	if ((test1_array3[0] != 1) && (test1_array3[1] != 4) && (test1_array3[2] != 9)) //expected results
		printf(" fail!\n");
	else
		printf(" pass!\n");



	//test 2:  simple array order reverse

	double test2_array1[ARRAYSIZE] = { 3,2,1 };
	double test2_array2[ARRAYSIZE] = { 1,2,3 };
	double test2_array3[ARRAYSIZE];

	printf("\ntest 2: simple array, orders reversed\n");

	MultiplyTwoArraysIntoThird(test2_array1, test2_array2, test2_array3, ARRAYSIZE);
	if ((test2_array3[0] != 3) && (test2_array3[1] != 4) && (test2_array3[2] != 3)) //expected results
		printf(" fail!\n");
	else
		printf(" pass!\n");



	//test 3:  negative x negative and positve x negative

	double test3_array1[ARRAYSIZE] = { -1,2,-3 };
	double test3_array2[ARRAYSIZE] = { 1,2,-3 };
	double test3_array3[ARRAYSIZE];

	printf("\ntest 3: negative x negative and positve x negative\n");

	MultiplyTwoArraysIntoThird(test3_array1, test3_array2, test3_array3, ARRAYSIZE);
	if ((test3_array3[0] != -1) && (test3_array3[1] != 4) && (test3_array3[2] != 9)) //expected results
		printf(" fail!\n");
	else
		printf(" pass!\n");




	//test 4:  decimal

	double test4_array1[ARRAYSIZE] = { 1,1,1 };
	double test4_array2[ARRAYSIZE] = { 1.5,2.5,3.5 };
	double test4_array3[ARRAYSIZE];

	printf("\ntest 4: decimal numbers\n");

	MultiplyTwoArraysIntoThird(test4_array1, test4_array2, test4_array3, ARRAYSIZE);
	if ((test4_array3[0] != 1.50) && (test4_array3[1] != 2.50) && (test4_array3[2] != 3.50)) //expected results
		printf(" fail!\n");
	else
		printf(" pass!\n");



	//test 5:  decimal extreme precision 

	double test5_array1[ARRAYSIZE] = { 1,1,1 };
	double test5_array2[ARRAYSIZE] = { 1.53180378127312,2.534242342342342,3.47283647326482734623876 };
	double test5_array3[ARRAYSIZE];

	printf("\ntest 5: extreme precision decimal numbers\n");

	MultiplyTwoArraysIntoThird(test5_array1, test5_array2, test5_array3, ARRAYSIZE);
	if ((test5_array3[0] != 1.53180378127312) && (test5_array3[1] != 2.534242342342342) && (test5_array3[2] != 3.47283647326482734623876)) //expected results
		printf(" fail!\n");
	else
		printf(" pass!\n");

	return 0;
}