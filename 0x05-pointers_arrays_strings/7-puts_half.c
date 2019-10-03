#include "holberton.h"

/**
 * puts_half - function that prints half of a string.
 *
 * @str: is a string param
 *
 * Return: no return
*/

void puts_half(char *str)

{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = ((i - 1) / 2);
		j++;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
