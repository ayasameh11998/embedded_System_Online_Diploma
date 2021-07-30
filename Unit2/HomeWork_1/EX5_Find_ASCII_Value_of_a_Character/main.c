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

	printf("##########Console-output###\n");
	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("ASCII value of %c = %d\n", ch, ch);
	printf("#############################\n");
	printf("\n\n########################################################################\n");

	return 0;
}
