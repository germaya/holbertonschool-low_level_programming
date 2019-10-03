#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination.
 * @src: source.
 * @n: variable integer.
 *
 * Return:  a string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
	i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
