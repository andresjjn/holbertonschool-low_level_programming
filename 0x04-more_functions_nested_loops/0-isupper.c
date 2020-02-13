#include "holberton.h"

/**
 * _isupper - Check if a c uppercase character.
 * @c: Charater to test
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int _isupper(int c)
{
	int a = 0, d;

	for (a = 'A'; a <= 'Z'; a++)
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
