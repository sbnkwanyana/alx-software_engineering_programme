#include "lists.h"

/**
 * print_dlistint - function prints all the elements of a doubly linked list
 * @h: doubly linked list pointer
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	if (h == NULL)
	{
		return (0);
	}
	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter += 1;
		h = h->next;
	}

	return (counter);
}
