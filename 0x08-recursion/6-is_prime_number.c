#include "holberton.h"

/**
 * test - Test the prime n.
 * @a: Number to test.
 * @b: Auxiliar int to test.
 * Return: 1 prime, otherwise 0.
 */
int test(int a, int b)
{
	if (a % b == 0)
		return (0);
	if (b * b > a)
		return (1);
	return (test(a, b + 1));
}

/**
 * is_prime_number - Function to test a prime number.
 * @n: Number to test.
 * Return: 1 if n is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int p;

	if (n < 2)
		return (0);
	p = test(n, 2);
		return (p);
}
