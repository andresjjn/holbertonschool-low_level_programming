#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: Number to test
 * Return: 0
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		d = 0 - d;
	}
	_putchar(d + '0');
	return (d);
}
