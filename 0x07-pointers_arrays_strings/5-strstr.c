#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in haystack string
 * Return: dest.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
