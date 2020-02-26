#include "holberton.h"

/**
 * _puts_recursion - Function thaht prints a string, followed by a new line.
 * @s: Input string.
 * Return: -.
 */
void _puts_recursion(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	;
	for (j = 0; j < i; j++)
		_putchar(s[j]);
	_putchar('\n');
}
