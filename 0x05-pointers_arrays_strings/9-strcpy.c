#include "holberton.h"

/**
 * _strcpy - Copy a string into other
 * @dest: String to copy.
 * @src: Buffer string
 * _putchar - Write characters
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;
	for (; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
