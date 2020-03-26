#include "holberton.h"

/**
 * iterate - Iterate to print.
 * @n: Number to convert.
 */
void iterate(unsigned long int n)
{
	if (n == 0)
		return;
	iterate(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to convert.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		iterate(n);
}
