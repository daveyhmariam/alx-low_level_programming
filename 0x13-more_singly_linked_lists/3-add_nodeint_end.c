#include "lists.h"

/**
 * add_nodeint_end - adds node at front
 *
 * @head: head of a list
 * @n: data of node
 *
 * Return: address of new node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *last = *head;

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		return (*head);
	}

	while ((last)->next != NULL)
	last = (last)->next;

	(last)->next = new;
	last = new;

	return (last);
}
