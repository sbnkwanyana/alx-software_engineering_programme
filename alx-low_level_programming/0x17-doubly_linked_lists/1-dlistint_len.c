#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in a linked list
 * @h: doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	if (h == NULL)
	{
		return (0);
	}

	counter = 0;

	while (h != NULL)
	{
		counter += 1;
		h = h->next;
	}
	return (counter);
}
