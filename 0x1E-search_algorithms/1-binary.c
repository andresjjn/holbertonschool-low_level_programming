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
	size_t b, i, m = 0, a = 0;

	if (!array)
		return (-1);

	b = size - 1;
	while (a <= b)
	{
		printf("Searching in array: ");
		for (i = a; i < b; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = (a + b) / 2;
		if (array[m] < value)
			a = m + 1;
		else if (array[m] > value)
			b = m - 1;
		else
			return (m);
	}
	return (-1);
}
