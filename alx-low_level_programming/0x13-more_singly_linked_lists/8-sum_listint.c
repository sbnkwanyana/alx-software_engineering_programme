#include "lists.h"

/**
 * sum_listint - sum all the data elements in list
 * @head: linked list to iterate over
 * Return: sum
 */

int sum_listint(listint_t *head)
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
