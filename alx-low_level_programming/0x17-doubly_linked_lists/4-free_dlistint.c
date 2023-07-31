#include "lists.h"

/**
 * free_dlistint - frees the memory allocation of a doubly linked list
 * @head: dooubly linked list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pntr;

	pntr = head;

	if (pntr != NULL)
	{
		while (head != NULL)
		{
			pntr = head;
			head = head->next;
			free(pntr);
		}
	}
}
