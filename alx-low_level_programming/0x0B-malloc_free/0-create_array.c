#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of memory to allocate
 * @c: character to initialize memory blocks
 * Return: memory alocation block
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size);

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
