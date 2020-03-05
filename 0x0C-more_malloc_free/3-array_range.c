#include "holberton.h"

/**
 * array_range - Creates an array of integers.
 * @min: Elements to save.
 * @max: Size of each element..
 * Return: Pointer of a matrix.
 */
int *array_range(int min, int max)
{
	int *str;
	int i, j;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	str = malloc(sizeof(int) * i);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		str[j] = min + j;
	return (str);
}
