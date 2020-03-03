#include "holberton.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer of string 1 to cocatenate.
 * @s2: Pointer of string 2 to cocatenate.
 * Return: Pointer of s1 and s2 concatenates..
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, s, t;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (s1 == NULL)
	{
		ptr = malloc(sizeof(char) * (j + 1));
		for (t = 0; t < j; t++)
			ptr[t] = s2[t];
		j++;
		ptr[j] = '\0';
		return (ptr);
	}
	else if (s2 == NULL)
	{
		ptr = malloc(sizeof(char) * (i + 1));
		for (t = 0; t < i; t++)
			ptr[t] = s1[t];
		i++;
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		s = j + i + 1;
		ptr = malloc(sizeof(char) * s);
		for (t = 0; t < s - 1; t++)
		{
			if (t > 0 && t <= i)
				ptr[t] = s1[t];
			else if (t > i && t <= i + j)
				ptr[t] = s2[t - i];
			else if (t == s)
				ptr[j] = '\0';
		}
	return (ptr);
	}
}
