/*
 * main.c
 *
 *  Created on: Jul 31, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define SIZE 100

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	/* Variables */
	int array[SIZE];
	int n; /* Size of array entered by the User */
	int i; /* Iterator */
	int inserted_element; /* To save the value */
	int location;
	////////////////////////////////////////////////////////////////////////////////

	/* Taking the size from the User */
	printf("Enter no of elements:\n");
	scanf("%d", &n);

	/* Taking the array elements from the User */
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	/* Taking the desired inserted element */
	printf("Enter the element to be inserted: ");
	scanf("%d", &inserted_element);

	/* Taking the desired location */
	printf("Enter the location: ");
	scanf("%d", &location);
	location--;

	/* Pushing the elements one location until reaching the location */
	for (i = n - 1; i >= location; i--)
	{
		array[i + 1] = array[i];
	}

	/* Now the location inserted by the User is empty */
	array[location] = inserted_element;

	/* Display the ARRAY */
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
