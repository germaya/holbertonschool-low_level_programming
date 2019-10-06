#include "holberton.h"
#include <stdio.h>

/**
 * main - the first 100 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	double a = 0;
	double b = 1;
	double f;
	int i;

	for (i = 0; i < 50 ; i++)
	{
		f = a + b;
		printf("%.f, ", f);
		a = b;
		b = f;
	}
	return (0);
}
