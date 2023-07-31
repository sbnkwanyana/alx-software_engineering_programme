#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts node at given index
 * @head: linked list head address
 * @idx: index to instert node
 * @n: inserted nodes integer value
 * Return: address of inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *current, *prev;
	unsigned int index;

	current = *head;
	node = (listint_t *) malloc(sizeof(listint_t));
	index = 0;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	do {
		if (current == NULL)
		{
			node->next = *head;
			*head = node;
			return (node);
		}
		if (current->next != NULL)
		{
			prev = current;
			current = current->next;
		}
		index += 1;
	} while (index != idx);

	if (current == NULL)
	{
		free(node);
		return (NULL);
	}
	prev->next = node;
	node->next = current;
	return (node);
}
