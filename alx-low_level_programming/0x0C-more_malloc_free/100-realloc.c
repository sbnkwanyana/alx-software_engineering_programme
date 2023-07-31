#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: memory pointer
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: void*
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr, *copy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pntr = malloc(new_size);

		if (pntr == NULL)
		{
			return (NULL);
		}
		return (pntr);
	}
	pntr = malloc(new_size);
	if (pntr == NULL)
	{
		return (NULL);
	}
	copy = ptr;
	for (i = 0; i < old_size; i++)
	{
		pntr[i] = copy[i];
		free(ptr);
	}
	return (pntr);
}
