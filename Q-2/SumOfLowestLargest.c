
// function file to assignment 3 REFACTOR question 2
// PROG71985 - F22
// Naryan Sambhi - NOV 2022


//Q2, sum of lowest and largest of array
// 
// goal:
// write and test a function that returns the sum of the largest and smallest
// elements of an array of doubles. 
// include test cases & edge cases
// make name for function

//REFACTOR
/*
Question 2: Sum of largest and smallest within array and test
o Specifications: 2.0/4.0 (The program produces correct results but does not display them correctly.)
 —Your test cases use assignment not evaluation to determine correctness.
o Readability: 4.0/4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability: 4.0/4.0 (The code could be reused as a whole or each routine could be reused.)
o Documentation: 4.0/4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double SumOfLowestLargest(double array[], double size_of_array)
{
	double lowest;
	double highest;
	double sum;

	highest = array[0];
	lowest = array[0];

	for (int i = 1; i < size_of_array; ++i) //new change to fix bug with hgihest and lowest brekaing eachother
	{
		if (array[i] > highest)
			highest = array[i];

		if (array[i] < lowest)
			lowest = array[i];
	}


	//add the lowest and largest of the array together into the return value. 
	sum = highest + lowest;

	return sum; //return the sum to program 
}

