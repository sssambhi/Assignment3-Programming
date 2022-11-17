// function file to assignment 3 REFACTOR question 1
// PROG71985 - F22
// Naryan Sambhi - NOV 2022

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


//Q1, function to switch values of two values to lowest of two
//
// goal:
// write and test a function called SmallerOf(double, double)
// replaces the contents of two double variables with the smaller of two values.
// for ex. smallerof(x,y) would reset both x and y to the smaller of the two.

void SmallerOf(double* x, double* y) //swaps location of largest to the location of the smallest //changed to void
{
	if (*x > *y)
	{
		*x = *y;
	}
	else
	{
		*y = *x;
	}
}
