#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Start address to fill.
 * @x: Value to be filled.
 * @n: Number of positions to fill after s.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
		
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
