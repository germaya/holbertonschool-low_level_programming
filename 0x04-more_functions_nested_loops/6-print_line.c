#include "holberton.h"

/**
 * print_line - prints n
 * @n: size
 * Return: none.
 */

void print_line(int n)

{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
