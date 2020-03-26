#include "holberton.h"

/**
 * get_bit - Search and return a value into the bit.
 * @n: Number to convert.
 * @index: Position to return value.
 * Return: Number in position index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	return (n & 1);
}
