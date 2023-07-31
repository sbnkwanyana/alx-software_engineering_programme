#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints all elements of list_t
 * @h: linked list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	unsigned long i;

	if (h == NULL)
	{
		return (0);
	}

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] ", 0);
			printf("%s\n", "(nil)");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		i += 1;
		h = h->next;
	}

	return (i);
}
