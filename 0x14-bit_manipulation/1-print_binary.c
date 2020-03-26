#include "holberton.h"

/**
 * iterate - Iterate to print.
 * @n: Number to convert.
 * Return: Iteration or 0.
 */
unsigned long int iterate(unsigned long int n)
{
	if (n == 0)
		return (0);
	else
		return (n % 2 + 10 * iterate(n / 2));
}

/**
 * print_number - Function that print integers
 * @n: Integer to print
 */
void print_number(unsigned long int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to convert.
 */
void print_binary(unsigned long int n)
{
	unsigned long int r;

	r = iterate(n);
	print_number(r);
}
