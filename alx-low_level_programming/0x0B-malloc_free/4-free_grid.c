#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function free all memory allocations
 * @grid: grid to free
 * @height: number of rows to free
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
