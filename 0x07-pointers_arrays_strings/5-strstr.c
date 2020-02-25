#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in haystack string
 * Return: dest.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	while (haystack[i] != '\0')
		i++;
	while (needle[j] != '\0')
		j++;
	while (haystack[k] < i)
	{
		if (haystack[k] ==  )
		i++;
	}
	return ('\0');
}
