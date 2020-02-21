#include "holberton.h"

/**
 * _strcmp - Compare two strings.
 * @s1: String to campare.
 * @s2: String to compare.
 * Return: dest 
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0', i++)
	{
		if (s1[i] != s2 [i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
