#include "holberton.h"

/**
 * _isalpha - check lowercase
 * @c: Charater to test
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int _isalpha(int c)
{
	int a, d = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			d = 1;
			break;
		}
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
		{
			d = 1;
			break;
		}
	}
	return (d);
}
