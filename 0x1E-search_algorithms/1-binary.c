#include "search_algos.h"

/**
 * binary_search -  Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a, b, m, i;

	a = 0;
	b = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	while (a <= b)
	{
		printf("Searching in array: ");
		for (i = a; i <= b; i++)
			if (i != b)
				printf("%lu, ", i);
			else
				printf("%lu\n", i);
		m = a + (b - a) / 2;
		if (array[m] == value)
			return ((int)m);
		if (array[m] < value)
			a = m + 1;
		else
			b = m - 1;
	}
	return (-1);
}
