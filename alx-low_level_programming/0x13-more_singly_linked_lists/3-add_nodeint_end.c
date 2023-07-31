#include "lists.h"

/**
 * add_nodeint_end - function adds node to the end of the linked list
 * @head: linked list to add new node to
 * @n: data value to be added to the last element
 * Return: address of head with the last element added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *last;

	node = (listint_t *) malloc(sizeof(listint_t));
	last = *head;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = node;

	return (*head);
}
