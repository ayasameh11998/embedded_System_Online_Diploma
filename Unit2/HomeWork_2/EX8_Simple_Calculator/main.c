/*
 * main.c
 *
 *  Created on: Jul 30, 2021
 *  Author: ayasameh1998
 */

#include <stdio.h>

float Calculate(float n1, float n2, char op);

int main()
{
	/////////////////////////////////
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/////////////////////////////////

	char operator;
	float num1, num2;

	printf("Enter operator either + or - or * or divide: ");
	scanf("%c", &operator);

	printf("Enter two operands: ");
	scanf("%f %f", &num1, &num2);

	printf("%f %c %f = %f\n", num1, operator, num2, Calculate(num1, num2, operator));

	return 0;
}

float Calculate(float n1, float n2, char op)
{
	float result;

	switch(op)
	{
	case '+':
	{
		result = n1 + n2;
		break;
	}
	case '-':
	{
		result = n1 - n2;
		break;
	}
	case '*':
	{
		result = n1 * n2;
		break;
	}
	case '/':
	{
		result = n1 / n2;
		break;
	}
	}

	return result;
}
