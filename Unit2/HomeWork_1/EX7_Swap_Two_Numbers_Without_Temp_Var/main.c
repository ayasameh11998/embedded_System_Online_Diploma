/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

void Swap_Two_Numbers_Plus(float* num1, float* num2);
void Swap_Two_Numbers_XOR(int* num1, int* num2);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	float num1, num2;

	printf("#########Console_output######\n");
	printf("Enter value of a: ");
	scanf("%f", &num1);

	printf("Enter value of b: ");
	scanf("%f", &num2);

	Swap_Two_Numbers_Plus(&num1, &num2);

	printf("\nAfter swapping, value of a = %f\n", num1);
	printf("After swapping, value of b = %f\n", num2);

	printf("#############################\n");
	printf("########################################################################\n");

	return 0;
}

/*PROBLEM: Overflow*/
void Swap_Two_Numbers_Plus(float* num1, float* num2)
{
	*num1 += *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}

/*
 * The overflow problem doesn't happen here
 * but it can only be of type int
 * */

void Swap_Two_Numbers_XOR(int* num1, int* num2)
{
	*num1 ^= *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

