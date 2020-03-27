#include "holberton.h"

/**
 * flip_bits - Counts the bits that need a flip
 * @n: Number 1
 * @m: Number 2;
 * Return: Flips times
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j, t;

	t = n ^ m;
	for (j = 0; t != 0; t >>= 1)
		if ((t & 1) == 1)
			j++;
	return (j);
}
