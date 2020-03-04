#include "holberton.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer of string 1 to cocatenate.
 * @s2: Pointer of string 2 to cocatenate.
 * Return: Pointer of s1 and s2 concatenates..
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, s, t, n, l1 = 0, l2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	while (s1[i] != 0)
	{
		i++;
		l1++;
	}
	if (s2 == NULL)
		s2 = "";
	while (s2[j] != 0)
	{	
		j++;
		l2++;
	}
	s = l1 + l2 + 1;
	ptr = malloc(s * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < l1; n++)
		ptr[n] = s1[n];
	for (t = 0; t <= l2; t++)
		ptr[n + t] = s2[t];
	ptr[t + n] = '\0';
	return (ptr);
}
