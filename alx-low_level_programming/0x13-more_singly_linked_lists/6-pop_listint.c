#include "lists.h"

/**
 * pop_listint - function returns the data value
 * of the 1st node in the linked list
 * @head: linked list pointer to remove head from
 * Return: data value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value;

	node = *head;
	value = 0;

	if (node == NULL)
	{
		free(node);
		return (value);
	}

	if (node->next != NULL)
	{
		*head = node->next;
	}
	else
	{
		*head = NULL;
	}
	value = node->n;
	free(node);
	return (value);
}
