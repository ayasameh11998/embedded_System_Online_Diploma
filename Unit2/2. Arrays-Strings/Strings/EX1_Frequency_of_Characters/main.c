/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define STRING_SIZE 100

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	/* Variables */
	char str[STRING_SIZE];
	char required_character;
	int i;
	int repeat_number = 0;
	////////////////////////////////////////////////////////////////////////////////

	/* Taking the string from the User */
	printf("Enter a string: ");
	gets(str);

	/* Taking the required letter to find its frequency */
	printf("Enter a character to find its frequency: ");
	scanf("%c", &required_character);

	/* Finding the frequency */
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == required_character)
		{
			repeat_number++;
		}
	}

	/* Display the frequency */
	printf("Frequency of %c is %d\n", required_character, repeat_number);

	return 0;
}
