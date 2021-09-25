/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define ARRAY_SIZE 100

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	float array[ARRAY_SIZE], sum = 0;
	int n; /* The Array Size entered by the User */
	int i; /* Iterator */

	/*
	* Ask the user to enter a number
	* Repeat until the User enters a number within the right range
	*/
	do
	{
		printf("Enter the number of data: ");
		scanf("%d", &n);
		if (n > 100 || n <= 0)
		{
			/* Error Message */
			printf("PLEASE ENTER A NUMBER WITHIN THE RANGE 1 AND 100");
		}
	}while(n > 100 || n <= 0);
	///////////////////////////////////////////////////////////////////

	/* Now taking the array elements from the User */
	for (i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i + 1);
		scanf("%f", &array[i]);
		sum += array[i]; /* Adding the element to the sum variable */
	}

	/* Calculate the Average */
	sum /= n;

	/* Display the result */
	printf("Average = %.2f\n", sum);

	return 0;
}

