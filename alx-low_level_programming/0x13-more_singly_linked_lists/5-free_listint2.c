#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *pntr;

	pntr = *head;

	if (head == NULL)
	{
		return;
	}

	if (pntr != NULL)
	{
		while (*head != NULL)
		{
			pntr = *head;
			*head = (*head)->next;
			free(pntr);
		}
	}
	*head = NULL;
}
