#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination
 * @src: source
 * @n:bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pntr;

	pntr = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (pntr);
}
