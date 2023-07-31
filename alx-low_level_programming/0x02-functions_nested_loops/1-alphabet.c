#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -prints alphabet in lowecase
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar(10);
}
