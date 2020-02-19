#include "holberton.h"

/**
 * puts_half - Prints half string
 * @str: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0, j = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	for (j = n; j  <=  i - 1; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
