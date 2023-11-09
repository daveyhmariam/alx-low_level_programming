#include "lists.h"

/**
 * sum_dlistint - sum of all elemets of linked list
 * @head: entry point
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (sum);
	while (head->prev)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
