#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from string 2 (s2)
 * Return: char* pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	unsigned int length, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1);

	pntr = malloc((length + n + 1) * sizeof(char));

	if (pntr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < (length + n); i++)
	{
		if (i < length)
		{
			pntr[i] = s1[i];
		}
		else
		{
			pntr[i] = s2[j++];
		}
	}

	pntr[i] = '\0';

	return (pntr);
}

