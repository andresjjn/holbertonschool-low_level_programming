#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: String concatenated.
 * @src: String to concatenate.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
	t = i + j + 1;
	for (; k <= t; k++)
	{
	if (k >= i && k < i + j)
	{
		dest[k] = src[k - i];
	}
	else if (k == t)
		dest[k]  = '\0';
	}
	return (dest);
}
