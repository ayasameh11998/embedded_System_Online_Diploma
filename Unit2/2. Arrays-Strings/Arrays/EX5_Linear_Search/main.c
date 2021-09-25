/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define SIZE 100

int linear_search(int arr[], int n, int searched_element);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	/* Variables */
	int n; /* Size of array insert by the User */
	int arr[SIZE];
	int i; /* Iterator */
	int searched_element;
	int location;
	////////////////////////////////////////////////////////////////////////////////

	/* Taking the size from the User */
	printf("Enter no of elements:\n");
	scanf("%d", &n);

	/* Taking the array elements from the User */
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* Taking the desired inserted element */
	printf("Enter the element to be searched: ");
	scanf("%d", &searched_element);

	location = linear_search(arr, n, searched_element);
	location++;

	if (location == -1)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("Number found at location: %d\n", location);
	}

	return 0;
}

int linear_search(int arr[], int n, int searched_element)
{
	int i; /* Iterator */
	for (i = 0; i < n; i++)
	{
		if (arr[i] == searched_element)
		{
			return i;
		}
	}

	return -1;
}
