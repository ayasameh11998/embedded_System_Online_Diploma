/*
 * main.c
 *
 *  Created on: Jul 29, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	int number;
	printf("##########Console-output###\n");
	printf("Enter a integer: ");
	scanf("%d", &number);
	printf("You entered: %d\n", number);
	printf("###########################\n");
	printf("\n########################################################################\n");

	return 0;
}
