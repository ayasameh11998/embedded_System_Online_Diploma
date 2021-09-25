/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define size 2

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	float matrix1[size][size], matrix2[size][size], result[size][size];
	int i, j; /* Iterators */

	/* Taking the first matrix elements from the user */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("Enter a%d%d: ", i + 1, j + 1);
			scanf("%f", &matrix1[i][j]);
		}
	}
	/////////////////////////////////////////////////////

	/* Taking the second matrix elements from the user */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("Enter b%d%d: ", i + 1, j + 1);
			scanf("%f", &matrix2[i][j]);
		}
	}
	/////////////////////////////////////////////////////

	/* Now Calculating the sum of the two matrices */
	printf("Sum Of Matrix:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%.1f ", result[i][j]);
		}
		printf("\n");
	}
	/////////////////////////////////////////////////////


	return 0;
}
