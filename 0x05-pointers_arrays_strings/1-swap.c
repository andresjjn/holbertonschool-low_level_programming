#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: First variable to swap.
 * @b: Second variable to swap.
 * _putchar - Write characters
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
