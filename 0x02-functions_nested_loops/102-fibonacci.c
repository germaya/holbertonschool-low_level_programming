#include <stdio.h>
#include <stdlib.h>

/**
 * main - the first 100 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	float a = 0;
	float b = 1;
	float f;
	int i;

	for (i = 0; i <= 50; i++)
	{
		f = a + b;
		if (i != 50)
			printf("%.f, ", f);
		else
			printf("%.f\n", f);
		a = b;
		b = f;
	}
	return (0);
}
