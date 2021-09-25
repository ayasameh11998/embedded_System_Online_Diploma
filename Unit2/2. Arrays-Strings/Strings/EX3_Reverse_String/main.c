/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	char str[STRING_SIZE];


	printf("Enter a string: ");
	gets(str);

	int i = 0;
	int j = strlen(str) - 1;

	/* Reversing */
	while (i < j)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

	/* Display the string after reversing */
	printf("Reverse string is: %s\n", str);

	return 0;
}
