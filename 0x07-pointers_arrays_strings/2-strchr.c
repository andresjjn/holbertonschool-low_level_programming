#include "holberton.h"

/**
 * _strchr - Function that locates a character in a string..
 * @s: Input string.
 * @c: Character to locates.
 * Return: dest.
 */
char *_strchr(char *s, char c)
{
	char *v;
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = 1;
			v = &s[i];
			break;
		}
		i++;
	}
	if (j == 0)
		v = '\0';
	return (v);
}
