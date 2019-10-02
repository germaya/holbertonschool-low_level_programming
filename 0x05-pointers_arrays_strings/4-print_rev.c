#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse..
 *
 * @s: is a char param
 *
 * Return: no return
*/

void print_rev(char *s)

{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
