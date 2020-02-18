#include "holberton.h"

/**
 * rev_string - Prints a string in reverse followed by a new line
 * @s: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	char m[9];

	for (i = 0; i <= 8; i++)
	{
		m[i] = *(s + i);
	}
	for (i = 8; i >= 0; i--)
	{
		*(s + i) = m[i];
	}
}
