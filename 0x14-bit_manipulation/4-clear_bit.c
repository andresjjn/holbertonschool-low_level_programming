#include "holberton.h"

/**
 * clear_bit - Erase a bit
 * @n: Number
 * @index: Position
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
