#include "holberton.h"

/**
 * print_to_98 - print all numbers from n o 98.
 * @n: int variable 
 * Return: Always 0 
 */

void print_to_98(int n)
{
	int i;

	i = n;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
}
