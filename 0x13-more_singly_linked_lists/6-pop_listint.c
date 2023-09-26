#include "lists.h"

/**
 * pop_listint - delete the first node from a list
 *
 * @head: head of a list
 *
 * Return: the date poped
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);

	*head = temp;

	return (data);
}
