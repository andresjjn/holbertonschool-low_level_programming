#include "holberton.h"

/**
 * size - Lenght of a string.
 * @s: String to test.
 * Return: int.
 */
int size(char *s)
{
	if (*s)
	{
		s++;
		return (1 + size(s));
	}
	return (0);
}

/**
 * test - Test funtion.
 * @s: String to test.
 * @b: Auxiliar int.
 * @n: Auxiliar int.
 * Return: String.
 */
int test(char *s, int b, int n)
{
	if (b >= n)
		return (1);
	if (s[n] == s[b])
		return (test(s, b + 1, n - 1));
	return (0);
}

/**
 * is_palindrome - Function that test a string.
 * @s: String to test.
 * Return: 1 if s is a palindrome, otherwise return 0.
 */
int is_palindrome(char *s)
{
	int n, p = 0;

	n = size(s);
	return (test(s, p, n - 1));
}
