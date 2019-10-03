#include "holberton.h"
#include <stdio.h>

/**
 * print_array - unction that prints n elements of an array of integers
 * @a: is a integer param
 * @n: is a integer param
 *
 * Return: no return
*/

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
