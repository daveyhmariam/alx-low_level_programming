#include "lists.h"

/**
 * sum_listint - frees a list
 *
 * @head: head of a list
 *
 * Return: sum
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
