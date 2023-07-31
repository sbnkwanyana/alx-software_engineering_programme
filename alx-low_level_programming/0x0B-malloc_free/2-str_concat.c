#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that returns pointer to allocated memory
 * with contents of the concatinated strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int i;
	size_t string1;
	size_t string2;
	size_t string3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	string1 = strlen(s1);
	string2 = strlen(s2);
	string3 = string1 + string2 + 1;
	mem = malloc(string3);
	if (mem != NULL)
	{
		while (*s1 != '\0')
		{
			mem[i] = *s1;
			s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			mem[i] = *s2;
			s2++;
			i++;
		}
		mem[i] = '\0';
	}
	return (mem);
}
