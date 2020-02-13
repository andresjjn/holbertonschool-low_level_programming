#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of lines
 * _putchar - Write character
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		if (n > 1)
		{
			for (; i < n ; i++)
			{
				for (; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			j = 0;
			}
		}
		else
		{
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
