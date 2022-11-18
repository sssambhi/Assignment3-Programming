
// tests file to assignment 3 REFACTOR, Q2
// PROG71985 - F22
// Naryan Sambhi - NOV 2022
//
//goal, 
//partitioned testing of different types of numbers for assignment 3 question 2
//function is to find the lowest number and largest number of an array, and then find the sum of the two numbers

//REFACTOR
/*
Question 2: Sum of largest and smallest within array and test
o Specifications: 2.0/4.0 (The program produces correct results but does not display them correctly.)
 —Your test cases use assignment not evaluation to determine correctness.
o Readability: 4.0/4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability: 4.0/4.0 (The code could be reused as a whole or each routine could be reused.)
o Documentation: 4.0/4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.
*/

//CHANGES
//THE PROGRAM DID NOT ALWAYS DISPLAY CORRECT RESULTS, THIS HAS BEEN FIXED IN THIS VERSION
//CREATED ACCURATE TEST CASES USING EVALUATION
//ROUNDED TO NEAREST .2 DECIMALS

#include <stdio.h>
#include "SumOfLowestLargest.h"

#define ARRAYSIZE 5


int main(void)
{

	double expected;
	double actual;


	// test 1:		basic array

	printf("\ntest 1, basic array:\n ");

	expected = 6;
	double array[ARRAYSIZE] = { 1,2,3,4,5 };
	actual = (SumOfLowestLargest(array, ARRAYSIZE));

	if (actual == expected)
		printf("passed\n");
	else
		printf("fail\n");


	// test 2:		negative plus positive
	printf("\ntest 2, negatives plus positive:\n ");

	expected = 4;
	double array2[ARRAYSIZE] = { 3,-2,4,2,6 };
	actual = (SumOfLowestLargest(array2, ARRAYSIZE));

	if (actual == expected)
		printf("passed\n");
	else
		printf("fail\n");


	// test 3:		negative plus negative
	printf("\ntest 3, negatives plus negative:\n ");

	expected = -6;
	double array3[ARRAYSIZE] = { -5,-4,-3,-2,-1 };
	actual = (SumOfLowestLargest(array3, ARRAYSIZE));

	if (expected == actual)
		printf("passed\n");
	else
		printf("fail\n");


	// test 4:		duplicate numbers in array
	printf("\ntest 4, duplicates in array:\n ");

	expected = 6;
	double array4[ARRAYSIZE] = { 1,1,2,5,5 };
	actual = (SumOfLowestLargest(array4, ARRAYSIZE));

	if (expected == actual)
		printf("passed\n");
	else
		printf("fail\n");


	// test 5:		basic array with switched orders (found bugs once corrected)
	printf("\ntest 5, basic array, orders switched:\n ");

	expected = 6;
	double array5[ARRAYSIZE] = { 5,4,3,2,1 };
	actual = (SumOfLowestLargest(array5, ARRAYSIZE));

	if (expected == actual)
		printf("passed\n");
	else
		printf("fail\n");


	// test 6:		decimal numbers simple (found bugs with rounding)
	printf("\ntest 6, decimal numbers ex.(1.2):\n ");

	expected = 6.20;
	double array6[ARRAYSIZE] = { 5.1, 4.1, 3.2, 2.1, 1.1 };
	actual = (SumOfLowestLargest(array6, ARRAYSIZE));
	
	if (expected == actual)
		printf("passed\n");
	else
		printf("fail\n");


	// test 7:		decimal numbers extreme precision (solved with rounding)
	printf("\ntest 7, decimal numbers extreme precision ex(5.213123131312312312):\n ");

	expected = 6.43;
	double array7[ARRAYSIZE] = { 5.213123131312312312, 2, 2, 2,  1.213123131312312312 };
	actual = (SumOfLowestLargest(array7, ARRAYSIZE));
	
	if (expected == actual)
		printf("passed\n");
	else
		printf("fail\n");

	return 0;
}

