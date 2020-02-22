#include "holberton.h"

/**
 * _strcmp - Compare two strings.
 * @s1: String to campare.
 * @s2: String to compare.
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int s1l = 0, s2l = 0;
	char *s1s = s1, *s2s = s2;

	while (*s1)
	{
		s1l = s1l + 1;
		s1++;
	}
	s1 = s1s;
	while (*s2)
	{
		s2l = s2l + 1;
		s2++;
	}
	s2 = s2s;
	if (s1 > s2)
		return (-15);
	else if (s1 < s2)
		return (15);
	while (*s1)
	{
		if (*s1 < *s2)
			return (15);
		if (*s1 > *s2)
			return (-15);
		s1++;
		s2++;
	}
	return (0);
}
