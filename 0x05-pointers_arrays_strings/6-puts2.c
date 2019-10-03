#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string.
 *
 * @str: is a string param
 *
 * Return: no return
*/

void puts2(char *str)

{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
		if (i % 2 == 0)
			i = i - 1;

		while (j <= i)
		{
			_putchar(*(str + j));
			j = j + 2;
		}
	_putchar('\n');
}
