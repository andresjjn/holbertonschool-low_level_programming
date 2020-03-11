#include "function_pointers.h"

/**
 * array_iterator - Iterate through an array using a funtion pointer.
 * @array: Pointer of an array.
 * @size: Size of string
 * @action: Function pointer
 * Return: -
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
