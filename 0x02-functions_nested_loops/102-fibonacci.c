#include "holberton.h"
#include <stdio.h>

/**
 * main - the first 100 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int i;
	int f;

	for (i = 0; i < 50 ; i++)
	{
		f = a + b;
		printf("%d, ", f);
		a = b;
		b = f;
	}
	return (0);
}
