#include "lists.h"

/**
 * free_list - function that frees memeory allocations
 * @head: linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
