/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

float Find_Largest(float arr[]);

#define size 3

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	float array[size];
	float largest;
	int i; /*for iterator*/

	printf("Enter three numbers: ");

	for(i = 0; i < size; i++)
	{
		scanf("%f", &array[i]);
	}

	largest = Find_Largest(array);

	printf("Largest Number = %f\n", largest);

	return 0;
}

float Find_Largest(float arr[])
{
	float num = arr[0];
	int i;

	for (i = 1; i < size; i++)
	{
		if (num < arr[i])
		{
			num = arr[i];
		}
	}

	return num;
}
