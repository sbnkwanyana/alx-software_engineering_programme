#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string from source to destination
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy from source
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
