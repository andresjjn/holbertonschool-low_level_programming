#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in haystack string
 * Return: dest.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b,  c = 0;

	for (a = 0; haystack[a] != 0; a++)
	{
		for (b = 0; haystack[a + c] == needle[b + c] &&
				needle[b + c] != 0 && haystack[a + c] != 0;)
			c++;
		if (needle[b + c] == 0)
			return (&haystack[a]);
	}
	return (0);

