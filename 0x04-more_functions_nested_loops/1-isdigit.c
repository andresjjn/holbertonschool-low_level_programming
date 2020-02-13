#include "holberton.h"

/**
 * _isdigit - Check if a number is a digit (0-9)
 * @c: Charater to test
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int _isdigit(int c)
{
	int a = 0, d;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
		{
			d = 1;
			break;
		}
		else
			d = 0;
	}
	return (d);
}
