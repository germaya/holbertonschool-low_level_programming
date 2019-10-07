#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination.
 * @src: source.
 * @n: variable integer.
 *
 * Return:  a string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
