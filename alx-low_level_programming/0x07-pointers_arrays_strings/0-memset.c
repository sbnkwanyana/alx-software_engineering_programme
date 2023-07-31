#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory pointer to fil
 * @b: byte value to be filled
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0;)
	{
		*s = b;
		n--;
		s++;
	}
	return (s);
}

