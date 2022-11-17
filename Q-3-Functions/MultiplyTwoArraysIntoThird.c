
// function file to assignment 3 REFACOTR question 3
// PROG71985 - F22
// Naryan Sambhi - NOV 2022


//Q3, Multiply Two arrays into third
// 
// goal:
// write and test a function that sets each element of in an arry to the product
// of the corresponding elements in two other arrays
// ex [2, 4, 5, 8] * [1, 0, 4, 6] = [2, 0, 20, 48]
// function name, MultiplyTwoArraysIntoThird
// arrays sent as function parameters
//
//REFACTOR
/*
Question 3: Multiply elements of 2 arrays into 3rd and test
o Specifications: 4.0/4.0 (The program works and meets all of the specifications.)
o Readability: 4.0/4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability: 4.0/4.0 (The code could be reused as a whole or each routine could be reused.)
o Documentation: 4.0/4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.)
*/

//NO CHANGES MADE

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//q3
double MultiplyTwoArraysIntoThird(double x[], double y[], double z[], double size_of_array)
{
	//multiplies each element of the two arrays together into third array one at a time. 
	for (int i = 0; i < size_of_array; i++)
	{
		z[i] = x[i] * y[i];
	}

	return 0;
}