#include "holberton.h"

/**
 * _abs - Absolute value of a number
 * @n: Number to test
 * _putchar - writes the character c to stdout
 * Return: 0
 */
int _abs(int n)
{
	if (n <= 0)
	n = n * -1;
	return (n);
}
