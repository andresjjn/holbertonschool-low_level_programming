#include "holberton.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Elements to save.
 * @size: Size of each element..
 * Return: Pointer of a matrix.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;
	return (str);
}
