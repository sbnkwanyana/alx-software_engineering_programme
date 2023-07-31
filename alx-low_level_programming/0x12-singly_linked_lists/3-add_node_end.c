#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list.
 * @head: pointer to pointer of the head element of the list
 * @str: string to copy to last node of the list
 * Return: pointer to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *node;

	last_node = *head;

	while (last_node && last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	node = (list_t *) malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = NULL;

	if (last_node)
	{
		last_node->next = node;
	}
	else
	{
		*head = node;
	}

	return (node);
}
