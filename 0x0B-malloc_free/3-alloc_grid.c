#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates two dimensional grid of integers with
 * specified height and width
 * @width: with of integers
 * @height: height of integers
 * Return: a grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(grid[j]);
			}
			free(grid);
			return (NULL);
	}

	for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	return (grid);
}
