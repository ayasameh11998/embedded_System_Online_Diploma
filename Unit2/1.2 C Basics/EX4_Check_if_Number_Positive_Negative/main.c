/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	float num;

	printf("Enter a number: ");
	scanf("%f", &num);

	if(num > 0)
	{
		printf("%f is positive.\n", num);
	}
	else if (num < 0)
	{
		printf("%f is negative.\n", num);
	}
	else
	{
		printf("you entered zero\n");
	}

	return 0;
}

