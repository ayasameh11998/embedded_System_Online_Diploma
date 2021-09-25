/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define ROW 100
#define COLUMN 100

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	/* Variables */
	int matrix[ROW][COLUMN];
	int transpose_matrix[ROW][COLUMN];
	int i, j; /* iterators */
	int row, column; /* Will be taken from the User */
	////////////////////////////////////////////////////////////////////////////////

	/* Taking number of rows & columns */
	printf("Enter rows and columns of matrix: ");
	scanf("%d%d", &row, &column);
	////////////////////////////////////////////////////////////////////////////////

	/* Prompt the user for entering the matrix elements */
	printf("Enter elements of matrix:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	////////////////////////////////////////////////////////////////////////////////

	/* Getting the Transpose of the Matrix */
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			transpose_matrix[j][i] = matrix[i][j];
		}
	}
	////////////////////////////////////////////////////////////////////////////////

	/* Display the input Matrix */
	printf("Entered Matrix:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	////////////////////////////////////////////////////////////////////////////////

	printf("################################\n");
	printf("Transpose of Matrix\n");
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < row; j++)
		{
			printf("%d ", transpose_matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
