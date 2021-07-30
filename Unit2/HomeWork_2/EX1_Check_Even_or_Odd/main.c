/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */
#include <stdio.h>
#include <stdbool.h>

bool Check_if_Even(int number);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	int num; /*The number that will be entered by the user to later be checked*/

	printf("Enter an integer you want to check: ");
	scanf("%d", &num);

	if (Check_if_Even(num))
	{
		printf("%d is even.\n", num);
	}
	else
	{
		printf("%d is odd.\n", num);
	}

	return 0;
}

bool Check_if_Even(int number)
{
	if (number % 2 == 0)
	{
		return true;
	}

	return false;
}

