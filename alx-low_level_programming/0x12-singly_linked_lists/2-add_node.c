#include "lists.h"
#include <string.h>

/**
 * add_node - function adds new node to the beggining of the list
 * @head: pointer to the pointer of the head element of list
 * @str: string to copy to new node string value
 * Return: pointer to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *) malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(node->str);
	node->next = *head;

	*head = node;

	return (node);
}
