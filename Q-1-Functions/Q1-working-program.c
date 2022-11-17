// Assignment 3
// question 1
//
// PROG71985 - F22
// Naryan Sambhi - oct 2022
// 
// working program file
//
// goal:
// working prototype of SmallerOf function
//
// 
//for extra recources & for initial manual testing process
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SmallerOf.h"


int main(void)
{
	double num1, num2;

	//input
	printf("\nenter 2 numbers, separated by a space: ");
	while (scanf("%lf %lf", &num1, &num2) != 2)
	{
		printf("\nyou didnt enter 2 numbers!\n");
		return 0;
	}

	//call function
	int smallest = SmallerOf(&num1, &num2);

	//output
	printf("values are now %.2lf, %.2lf", num1, num2);

	return 0;
}