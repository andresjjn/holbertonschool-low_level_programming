#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars.
 * Return: The converted number or errors.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, t = 0;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		j++;
	}
	j--;
	while (j >= 0)
	{
		t += (b[j] - 48)  * k;
		k *= 2;
		j--;
	}
	return (t);
}
