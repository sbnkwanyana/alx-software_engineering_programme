#include "main.h"
#include <string.h>

/**
 * leet - function encodes a string into 1337
 * @str: string to encode
 * Return: char pointer
 */

char *leet(char *str)
{
	int i, x;

	char checks1[] = "aeotl";
	char checks2[] = "AEOTL";
	char replacements[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (str[i] == checks1[x] || str[i] == checks2[x])
			{
				str[i] = replacements[x];
				break;
			}
		}
	}
	return (str);
}
