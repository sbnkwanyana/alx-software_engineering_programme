#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string separator
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	char *valuepntr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		valuepntr = va_arg(args, char*);

		if (valuepntr != NULL)
		{
			printf("%s", valuepntr);
		}
		else
		{
			printf("%s", "(nil)");
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
