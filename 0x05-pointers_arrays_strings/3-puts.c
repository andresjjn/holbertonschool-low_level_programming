#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line
 * @str: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
