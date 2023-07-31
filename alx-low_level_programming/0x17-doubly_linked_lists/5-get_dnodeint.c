#include "lists.h"

/**
 * get_dnodeint_at_index - function returns
 * @head: linked list
 * @index: index of node
 * Return: dlistint_t pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i += 1;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
