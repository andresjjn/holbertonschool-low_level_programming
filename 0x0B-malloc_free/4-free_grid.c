#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional array.
 * @height: Number of matrix rows.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		return;
	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
