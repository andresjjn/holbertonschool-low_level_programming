#include "holberton.h"

/**
 * _strdup - return pointer of copy string and created with malloc.
 * @str: Pointer of string to copy.
 * Return: Pointer or null if fails.
 */
char *_strdup(char *str)
{
	unsigned int i, j = 0, s;
	char *ptr;

	while (str[j] != '\0')
		j++;
	j++;
	s = sizeof(char) * j;
	ptr = malloc(s);
	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		ptr[i] = str[i];
	return (ptr);
}
