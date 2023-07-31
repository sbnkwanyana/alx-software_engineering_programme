#include "main.h"
#include <string.h>

/**
 * string_toupper - converts to uppercase string parameter
 * @str: input string
 * Return: string pointer
 */

char *string_toupper(char *str)
{
	unsigned long i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
