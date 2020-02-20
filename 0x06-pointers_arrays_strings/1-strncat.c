#include "holberton.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: String concatenated.
 * @src: String to concatenate.
 * @n: number of character to concatenate with dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, t = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (k = i; k < i + n; k++)
	{
		dest[k] = src[t];
		t++;
		if (dest[k] == '\0')
			break;
	}
	return (dest);
}
