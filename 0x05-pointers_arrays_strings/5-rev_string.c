#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: is a char param
 *
 * Return: no return
*/

void rev_string(char *s)

{
	char a, b;
	int c, d;

	c = 0;
	d = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (; c >= d; c--)
	{
		a = s[c];
		b = s[d];
		s[d] = a;
		s[c] = b;
		d++;
	}
}
