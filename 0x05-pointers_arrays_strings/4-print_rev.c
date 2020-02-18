#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = 62; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
