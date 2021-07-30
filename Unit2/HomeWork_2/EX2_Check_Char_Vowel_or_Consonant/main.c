/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool Check_if_Vowel(char ch);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	char c;
	printf("Enter an alphabet: ");
	scanf("%c", &c);

	if (Check_if_Vowel(c))
	{
		printf("%c if a vowel.", c);
	}
	else
	{
		printf("%c if a consonant.", c);
	}

	return 0;
}

bool Check_if_Vowel(char ch)
{
	// strlwr(ch);

	if (ch == 'a' || ch == 'u' || ch == 'e' || ch == 'i' || ch == 'o')
	{
		return true;
	}

	return false;
}
