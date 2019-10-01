#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: is a integer param
 * @b: is a integer param
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{
	int a1;

	a1 = *a;
	*a = *b;
	*b = a1;
}
