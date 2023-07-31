#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a list
 * @head: list pointer to pointer
 * @n: node data to add
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_to_add;

	node_to_add = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (node_to_add == NULL)
	{
		free(node_to_add);
		return (NULL);
	}

	node_to_add->n = n;
	node_to_add->prev = NULL;
	node_to_add->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = node_to_add;
	}
	(*head) = node_to_add;

	return (*head);

}
