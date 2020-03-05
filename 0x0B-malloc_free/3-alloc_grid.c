#include "holberton.h"

/**
 * alloc_grid - Create and fill a matrix with 0
 * @width: Number of matrix columns.
 * @height: Number of matrix rows.
 * Return: Pointer of a matrix.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **str;

	if (width <= 0 && height <= 0)
		return (NULL);
	str = malloc(sizeof(int *) * height);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);
		if (str[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(str[j]);
			}
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			str[i][j] = 0;
	return (str);
}
