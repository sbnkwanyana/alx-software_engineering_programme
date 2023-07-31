#include "lists.h"

/**
 * free_listint - function frees memory allocations of linked list nodes
 * @head: linked list node to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *pntr;

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
