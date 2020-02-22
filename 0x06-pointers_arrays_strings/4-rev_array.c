#include "holberton.h"

/**
 * reverse_array - Reverse an array.
 * @a: Array to reverse.
 * @n: The size of a.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int k = 0, au;

	while (k < n--)
	{
		au = a[k];
		a[k++] = a[n];
		a[n] = au;
	}
}
