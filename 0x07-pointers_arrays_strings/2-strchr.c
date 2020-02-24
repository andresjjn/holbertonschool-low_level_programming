#include "holberton.h"

/**
 * _strchr - Function that locates a character in a string..
 * @s: Input string.
 * @c: Character to locates.
 * Return: dest.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
