#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: is a int param
 * @n: is a int param
 * Return: 0
*/

void reverse_array(int *a, int n)

{
	int *a, n;
	int c, d;

	c = 0;
	d = 0;

	while (*a[c] != '\0')
	{
		c++;
	}
	c--;
	for (; c >= d; c--)
	{
		*a = s[c];
		n = s[d];
		s[d] = *a;
		s[c] = n;
		d++;
	}
}
