#include "holberton.h"

/**
 * create_array - creates an array of full it..
 * @size: Size of array to create.
 * @c: Initial char.
 * Return: Pointer or error if fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
