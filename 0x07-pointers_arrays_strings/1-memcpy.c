#include "holberton.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Final memory area.
 * @src: Initial memory area to be copied 
 * @n: Number bytes to copy.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
