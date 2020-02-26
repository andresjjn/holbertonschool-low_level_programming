#include "holberton.h"

/**
 * _puts_recursion - Function thaht prints a string, followed by a new line.
 * @s: Input string.
 * Return: -.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
