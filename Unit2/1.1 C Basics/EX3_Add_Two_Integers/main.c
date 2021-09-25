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

	int num1;
	int num2;

	printf("##########Console-output###\n");
	printf("###########################\n");
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Sum: %d\n", num1 + num2);
	printf("###########################\n");
	printf("\n########################################################################\n");

	return 0;
}
