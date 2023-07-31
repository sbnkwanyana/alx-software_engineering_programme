#include "lists.h"

/**
 * *add_nodeint - function adds node to beginning of the list
 * @head: linked list to add to
 * @n: integer value to add to nodes data element
 * Return: pointer address to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (head != NULL)
	{
		node->next = *head;
	}

	*head = node;

	return (*head);
}
