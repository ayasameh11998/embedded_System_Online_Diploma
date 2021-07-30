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

	int num; /* Sum from 1 up to this number */
	int i;
	int sum = 0; /* To avoid overflow with big numbers you should use a data type long long */
	printf("Enter an integer: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum += i;
	}

	printf("Sum = %d\n", sum);

	return 0;
}
