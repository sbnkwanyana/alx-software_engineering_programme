#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function returns number of elements in a linked list
 * @h: linked list to traverse
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int elements;

	elements = 0;
	if (h != NULL)
	{
		do {
			elements += 1;
			h = h->next;
		} while (h != NULL);
	}
	return (elements);
}
