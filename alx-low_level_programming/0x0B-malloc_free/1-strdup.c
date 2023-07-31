#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - unction that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate to memory
 * Return: duplicate memory allocation
 */
char *_strdup(char *str)
{
	unsigned long i;
	char *mem;

	if (str == NULL)
	{
		return (NULL);
	}

	mem = malloc((strlen(str) + 1));

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		mem[i] = str[i];
	}

	return (mem);
}
