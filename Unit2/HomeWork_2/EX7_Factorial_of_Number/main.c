/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

int Factorial(int n);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	int num;

	/* Trying to take a +ve number from the user */
	do
	{
		printf("Enter an integer: ");
		scanf("%d", &num);
		if (num < 0)
		{
			printf("Error!!! Factorial of negative number doesn't exist\n\n");
		}
	}
	while(num < 0);

	int result = Factorial(num);
	printf("Factorial = %d\n", result);

	return 0;
}

int Factorial(int n)
{
	if (n == 1) /* Base Case */
	{
		return 1;
	}
	return n * Factorial(n - 1);
}
