#include "holberton.h"

/**
 * puts2 - Prints position of a string that %2=0
 * @str: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (; j <=  i - 1; j++)
	{
		if (str[j] % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
