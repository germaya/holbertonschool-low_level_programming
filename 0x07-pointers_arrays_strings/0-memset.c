#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: char to fill
 * @b: char with to fill
 * @n: variable integer.
 *
 * Return:  a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
