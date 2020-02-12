#include "holberton.h"

/**
 * times_table - Prnt table from 0 to 9
 * print_putchar - Print numbers just with _putchar
 * _putchar - writes the character c to stdout
 * Return: 0
 */
void times_table(void)
{
	long p, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		p = (i * j);
		print_putchar(p);
		if (j != 9)
		{
			_putchar(',');
			if ((i*(j+1)) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if ((i*(j+1)) >= 10)
			{
				_putchar(' ');
			}
		}
		}
	_putchar('\n');
	}
}
