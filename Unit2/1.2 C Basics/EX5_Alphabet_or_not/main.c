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

	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'z')
	{
		printf("%c is an alphabet.", ch);
	}
	else
	{
		printf("%c is not an alphabet.", ch);
	}

	return 0;
}
