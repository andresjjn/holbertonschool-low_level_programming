#include "holberton.h"

/**
 * print_sign - Print the sign of a number
 * @n: Number to test
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int print_sign(int n)
{
	int d = 0;

	if (n > 0)
	{
		d = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		d = -1;
		_putchar('-');
	}
	else
	{
		d = 0;
		_putchar('0');
	}
	return (d);
}
