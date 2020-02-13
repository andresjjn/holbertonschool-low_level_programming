#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * print_putchar - Print numbers just with _putchar
 * _putchar - writes the character c to stdout
 * Return: 0
 */
void more_numbers(void)
{
	long i = 0, j = 0, d = 0;

	for (; i <= 10 ; i++)
	{
		for (; j <= 14; j++)
		{
			d = j % 10;
			if (j > 9)
			_putchar('1');
			_putchar(d + '0');
		}
	j = 0;
	_putchar('\n');
	}
}
