#include "lists.h"

/**
 * list_len - function returns number of elements in linked list
 * @h: linked list
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned long i;

	if (h == NULL)
	{
		return (0);
	}

	i = 0;

	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}

	return (i);
}
