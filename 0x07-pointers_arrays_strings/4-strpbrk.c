#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: Input string.
 * @accept: input string.
 * Return: dest.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, y = 0;

	while (s[y] != '\0')
		y++;
	while (i <= y)
	{
		if (s[i] == accept[i])
			return (&s[i - 1]);
		i++;
	}
	return ('\0');
}
