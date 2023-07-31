#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int middle;
	int i;
	int length = strlen(str);

	if (length % 2 == 0)
	{
		middle = strlen(str) / 2;
	}
	else if (length % 2 == 1)
	{
		middle = (strlen(str) + 1) / 2;
	}

	for (i = middle; i < length ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
