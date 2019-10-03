#include "holberton.h"

/**
 **_strcpy - function that copies the string pointed to by src.
 * @dest: is a char param
 * @src: is a char param
 *
 * Return: no return
*/

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
