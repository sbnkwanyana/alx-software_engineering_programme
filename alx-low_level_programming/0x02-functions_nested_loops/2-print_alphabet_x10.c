#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowecase ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar(10);
	}
}
