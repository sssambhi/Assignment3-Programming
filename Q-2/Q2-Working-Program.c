// Assignment 3
// question 2
//
// PROG71985 - F22
// Naryan Sambhi - oct 2022
//

// goal:
// working prototype of SumOfLowestLargest function
//
//
// everything to be commented out
// only made for extra recourse and testing
//
//for extra recources for initial manual testing process

#include "SumOfLowestLargest.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define SIZEOFARRAY 100

int main(void)
{
	//define 
	double array[SIZEOFARRAY];
	double sum;
	double size;


	printf("please enter a size for your array under %d and more then 0: ", SIZEOFARRAY);

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

	//functions & output

	MakeArray(array, size);

	sum = (SumOfLowestLargest(array, size));

	printf("\nthe sum of your lowest and largest digit of your array is, %.2lf\n", sum);

	return 0;
}
