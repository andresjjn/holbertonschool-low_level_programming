#include "holberton.h"

/**
 * _strcmp - Compare two strings.
 * @s1: String to campare.
 * @s2: String to compare.
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	while (*p1 != '\0')
	{
		if (*p2 == '\0')
			return (15);
		if (*p2 > *p1)
			return (-15);
		if (*p1 > *p2)
			return (15);
		p1++;
		p2++;
	}
	if (*p2 != '\0')
		return (-15);
	return (0);
}
