#include "holberton.h"

/**
 * _islower - check lowercase
 * @c: Charater to test
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int _islower(int c)
{
	int a = 0, d;

	for (a = 'a'; a <= 'z'; a++)
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
