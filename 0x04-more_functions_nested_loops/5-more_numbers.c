#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c;
	int n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n <= 15; n++)
		{
			if (n > 9)
				_putchar('1');
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
