#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character _ should be printed
 * _putchar - Write _
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
	for (; a < n; a++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
	return;
}
