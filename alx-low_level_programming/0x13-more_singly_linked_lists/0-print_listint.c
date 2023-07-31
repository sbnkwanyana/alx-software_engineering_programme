#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - function prints all numbers in linked list
 * @h: linked list to traverse
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int count;

	count = 0;
	if (h != NULL)
	{
		do {
			printf("%d\n", h->n);
			count += 1;
			h = h->next;
		} while (h != NULL);
	}
	return (count);
}
