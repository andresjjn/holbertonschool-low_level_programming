#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: Number to test
 * Return: 0
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = n * -1;
	}
	d = (n % 10) + '0';
	_putchar(d);
	return (d);
}
