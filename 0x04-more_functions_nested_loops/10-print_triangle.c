#include "holberton.h"

/**
 * print_triangle - Draws a triangle in the terminal
 * @size: Size of the triangle
 * _putchar - Write character
 * Return: 0
 */
void print_triangle(int size)
{
	int i = 0, j = 0, k = 0;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			j = i + 1;
			k = 0;
			for (; j < size; j++)
			{
				_putchar(' ');
			}
			for (; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
