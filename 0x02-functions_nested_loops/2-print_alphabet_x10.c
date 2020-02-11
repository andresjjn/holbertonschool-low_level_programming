#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 * _putchar - writes the character c to stdout
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int a = 0;

	for (; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
