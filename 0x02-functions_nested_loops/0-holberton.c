#include "holberton.h"

/**
 * main - Print Holberton
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int main(void)
{
	char c[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i = 0;

	for (; i <= 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
