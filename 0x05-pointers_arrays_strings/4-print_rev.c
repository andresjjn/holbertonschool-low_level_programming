#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
