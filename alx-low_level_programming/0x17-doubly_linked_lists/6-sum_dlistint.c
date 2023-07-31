#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all nodes in linked list
 * @head: linked list
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
