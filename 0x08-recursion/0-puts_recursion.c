#include "holberton.h"

/**
 * _puts_recursion - Function thaht prints a string, followed by a new line.
 * @s: Input string.
 * Return: -.
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		return (_putchar('\n'));
	_putchar(s);
	return (_puts_recursion(s + 1));
}
