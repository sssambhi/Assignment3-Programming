
// tests file to assignment 3 REFACTOR, Q1
// PROG71985 - F22
// Naryan Sambhi - NOV 2022

//goal, 
//partitioned testing of different types of numbers for assignment 3 question 1
//function is to switch both numbers into the smallest value of the two

//REFACTOR
/*
Question 1: largerOf() function and tests
o Specifications : 2.0 / 4.0 (The program produces correct results but does not display them correctly.)
—Your test cases use assignment not evaluation to determine correctness.
o Readability : 4.0 / 4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability : 3.0 / 4.0 (Most of the code could be reused in other programs.)
—SmallerOf should be of type void if no return is being sent
o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.)
*/

//CHANGES
//CHANGED FUNCTION TO VOID

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SmallerOf.h"

int main(void)
{
	//defining 
	double num1, num2;

	//test 1 -  lowest entered first - proving order does not matter
	printf("\ntest 1, lowest first: ");

	num1 = 1;
	num2 = 2;

	SmallerOf(&num1, &num2);

	if ((num1 = 1) && (num2 = 1)) //expected results
		printf("\npassed\n");
	else
		printf("\nfail\n");	//does not match expected





	//test 2 - lowest entered second - proving order does not matter
	printf("\ntest 2, lowest second: ");

	num1 = 2;
	num2 = 1;

	SmallerOf(&num1, &num2);

	if ((num1 = 1) && (num2 = 1)) //expected results
		printf("\npassed\n");
	else
		printf("\nfail\n"); //does not match expected





	//test 3 - negative - proving negative numbers will be recognized as lower than positive
	printf("\ntest 3, negative number: ");

	num1 = -5;
	num2 = 10;

	SmallerOf(&num1, &num2);

	if ((num1 = -5) && (num2 = -5)) //expected results
		printf("\npassed\n");
	else
		printf("\nfail\n"); //does not match expected




	//test 4 - decimal - proving decimal numbers are accepted and dont lose their values
	printf("\ntest 4, decimal numbers: ");

	num1 = 1.5;
	num2 = 3.2;

	SmallerOf(&num1, &num2);

	if ((num1 = 1.5) && (num2 = 1.5)) //expected results
		printf("\npassed\n");
	else
		printf("\nfail\n"); //does not match expected

	return 0;
}