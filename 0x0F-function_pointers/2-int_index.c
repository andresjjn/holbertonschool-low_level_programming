#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Pointer of an array.
 * @size: Size of string
 * @cmp: Function pointer
 * Return: -
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	if (array[i] == '\0')
		return (-1);
	return (-1);
}
