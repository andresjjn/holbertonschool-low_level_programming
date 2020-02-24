#include "holberton.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: Input string.
 * @accept: input string.
 * Return: dest.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, t, r = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				t = 1;
			j++;
		}
		j = 0;
		if (t == 0)
			break;
		i++;
		r++;
		t = 0;
	}
	return (r);
}
