#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * @n: is an integer param
 * Return: Always 0.
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
