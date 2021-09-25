/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

#define STRING_SIZE 100

int String_Length(char ch[]);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	char str[STRING_SIZE];

	printf("Enter a string: ");
	gets(str);

	printf("Length of string = %d\n", String_Length(str));

	return 0;
}

int String_Length(char ch[])
{
	int i = 0;
	while(ch[i] != 0)
	{
		i++;
	}
	return i;
}
