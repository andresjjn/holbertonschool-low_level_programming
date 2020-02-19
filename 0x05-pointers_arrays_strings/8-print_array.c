#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints elements from an array to integers
 * @a: String to print.
 * @n: Number of elements of array
 * printf - Command to print on terminal
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
