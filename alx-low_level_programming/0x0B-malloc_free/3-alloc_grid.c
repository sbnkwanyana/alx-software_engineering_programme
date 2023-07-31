#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height < 1 || width < 1)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
