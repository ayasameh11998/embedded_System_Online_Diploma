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

	float num1, num2;
	printf("##########Console-output###\n");
	printf("Enter a integer: ");
	printf("Enter two numbers: ");
	scanf("%f %f", &num1, &num2);
	printf("Product: %f\n", num1 * num2);
	printf("########################################################################\n");

	return 0;
}

