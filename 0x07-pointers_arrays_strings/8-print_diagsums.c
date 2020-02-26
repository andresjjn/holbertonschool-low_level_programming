#include "holberton.h"

/**
 * print_diagsums - Function that print the sum of the two diagonals.
 * @a: Poiter that recives the matrix.
 * @size: Size of matrix.
 * Return: -
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;

	for (i = 0; i < size; i++)
		j = j + a[((size + 1) * i)];
	printf("%d, ", j);
	j = 0;
	for (i = 1; i <= size; i++)
		j = j + a[((size - 1) * i)];
	printf("%d\n", j);
}
