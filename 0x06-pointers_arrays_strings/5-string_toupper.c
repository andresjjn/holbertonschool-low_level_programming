#include "holberton.h"

/**
 * string_toupper - Put all letters to upper.
 * Return: String to upper.
 */
char *string_toupper(char *p)
{
	char *in = p;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}
	return (in);
}
