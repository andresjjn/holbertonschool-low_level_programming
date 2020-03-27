#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Number set.
 * @index: Number to convert.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int t = 1;

	if (index > 64)
		return (-1);
	t = t << index;
	*n = (*n | t);
	return (1);
}
