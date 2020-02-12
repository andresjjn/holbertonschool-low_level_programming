#include "holberton.h"

/**
 * print_to_98 - print numbers to 98
 * @n: Number to test
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	for (; n >= 98; n--)
	{
		print_putchar(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
	else if (n < 98)
	{
	for (; n <= 98; n++)
	{
		print_putchar(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
