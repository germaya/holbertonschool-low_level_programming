#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar (alpha);
		alpha++;
	}
	_putchar ('\n');
}
