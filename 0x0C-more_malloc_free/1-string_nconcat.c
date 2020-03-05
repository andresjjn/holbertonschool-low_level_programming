#include "holberton.h"

/**
 * _strlen - Lenght of a funtion.
 * @s: String variable input.
 * Return: a (length of string)
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: String 1 to concatenate.
 * @s2: String 2 to concatenate.
 * @n: Bytes to contenated from s2..
 * Return: Pointer of memory created.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, t, s, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = _strlen(s1);
	m = _strlen(s2);
	if (n >= m)
		n = m;
	t = (n + s + 1);
	str = malloc(sizeof(char) * t);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < t; i++)
	{
	if (i < s)
		str[i] = s1[i];
	else if (i < t - 1 && i >= s)
		str[i] = s2[i - s];
	else if (i >= t - 1)
		str[i] = '\0';
	}
	return (str);
}
