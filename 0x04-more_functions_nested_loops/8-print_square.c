#include "holberton.h"

/**
 * print_square - prints squre
 * @size: square's size
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
