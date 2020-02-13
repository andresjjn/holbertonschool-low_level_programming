#include "holberton.h"

/**
 * print_square - Prints a square followed by a new line.
 * @size: Size of the square
 * _putchar - Write character
 * Return: 0
 */
void print_square(int size)
{
	int i = 0, j = 0;

	if (size >= 1)
	{
		for (; i < size ; i++)
		{
			for (; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		j = 0;
		}
	}
	else
	_putchar('\n');
}
