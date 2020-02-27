#include "holberton.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @s: Input string.
 * Return: Outcome to factorial.
 */
int factorial(int n)
{
	if (n == 0) 
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
