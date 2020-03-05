#include "holberton.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Size of memory to allocate.
 * Return: Pointer of memory created.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *str;

	str = malloc(b);
	if (str == NULL)
	{
		free(str);
		exit (98);
	}
	return (str);
}
