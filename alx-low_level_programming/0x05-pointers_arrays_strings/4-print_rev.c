#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - return length of a string
 * @s: string value
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i--)
	{
		putchar(s[i - 1]);
	}
	putchar('\n');
}
