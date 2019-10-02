#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: is a char param
 *
 * Return: lenght of a string.
 */

int _strlen(char *s)

{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
