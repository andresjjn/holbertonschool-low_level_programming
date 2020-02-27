#include "holberton.h"

/**
 * srt - Return
 * @n : Number
 * @i : Aux number
 * Return: Res
 */
int srt(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n < (i * i))
		return (-1);
	return (srt(n, i + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Number to apply square root.
 * Return: Square root.
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int t;

	t = srt(n, i);
	return (t);
}
