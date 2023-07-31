#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements to allocate for
 * @size: size in bytes for each element
 * Return: void* pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pntr;
	unsigned int i;

	if (nmemb < 1 || size < 1)
	{
		return (NULL);
	}

	pntr = malloc(nmemb * size);

	if (pntr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		pntr[i] = 0;
	}

	return (pntr);
}
