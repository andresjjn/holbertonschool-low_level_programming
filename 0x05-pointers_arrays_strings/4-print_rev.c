#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0, i;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	for (i = a; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
