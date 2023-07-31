#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min:value set
 * @max: value set 2
 * Return: int* array
 */

int *array_range(int min, int max)
{
	int *pntr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	pntr = malloc((max - min + 1) * sizeof(*pntr));

	if (pntr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		pntr[i] = min;
		min++;
	}

	return (pntr);
}
