#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: memory size to allocate
 * Return: void* pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
	}

	return (pntr);
}
