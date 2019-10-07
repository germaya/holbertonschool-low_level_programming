#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: The string to be searched
 * @c: The character to search for
 *
 * Return:  a string.
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\n')
	{
		if (s[i] == c)
			return (s + i);
	i++;
	}
	return (0);
}
