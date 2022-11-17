// Assignment 3
// question 3
//
// PROG71985 - F22
// Naryan Sambhi - oct 2022
//
// goal:
// working prototype of MultiplyTwoArraysIntoThird function
//
//
// everything to be commented out
// only made for extra recourse and testing
//
// for extra recources for initial manual testing process


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "MultiplyTwoArraysIntoThird.h"

#define SIZEOFARRAY 100 

int main(void)
{
	//define
	double array1[SIZEOFARRAY];
	double array2[SIZEOFARRAY];
	double array3[SIZEOFARRAY];
	double size;


	printf("please enter a size for your arrays under %d and above 0: ", SIZEOFARRAY);

	//return if undesired input 
	if (scanf("%lf", &size) != 1)
	{
		printf("\nyou didnt enter a valid input\n");
		return(1);
	}

	if ((size > SIZEOFARRAY) || (size <= 0))
	{
		printf("\nyou didnt enter a valid input\n");
		return 2;
	}


	//make into table if time:

	//functions
	//array 1
	printf("\n\n\nplease create your first array: \n");
	MakeArray(array1, size);

	//array 2
	printf("\n\n\nplease create your second array: \n");
	MakeArray(array2, size);

	//into array 3
	MultiplyTwoArraysIntoThird(array1, array2, array3, SIZEOFARRAY);

	//display outputs
	printf("\n\n\n");

	DisplayArray(array1, size);

	printf("\n X \n");

	DisplayArray(array2, size);

	printf("\n=\n");

	//array 3
	DisplayArray(array3, size);
	printf("\n\n\n");

	return 0;
}