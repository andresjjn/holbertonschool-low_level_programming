#include "holberton.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Elements to save.
 * @size: Size of each element..
 * Return: Pointer of a matrix.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	return (str);
}
