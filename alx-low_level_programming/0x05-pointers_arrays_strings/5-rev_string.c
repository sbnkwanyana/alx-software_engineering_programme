#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string value
 * Return: void
 */

void rev_string(char *s)
{
	int i, temp, middle;
	int len = strlen(s);

	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
