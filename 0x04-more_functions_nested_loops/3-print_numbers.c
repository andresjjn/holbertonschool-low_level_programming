#include "holberton.h"

/**
 * print_numbers - Print digit numbers (0-9)
 * _putchar - writes the character c to stdout
 * Return: 0
 */
void print_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	_putchar('0' + a);
	_putchar('\n');
}
