#include "holberton.h"

/**
 * print_most_numbers - Print digit numbers (0-9) except 2 & 4
 * _putchar - writes the character c to stdout
 * Return: 0
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		_putchar('0' + a);
	}
	_putchar('\n');
}
