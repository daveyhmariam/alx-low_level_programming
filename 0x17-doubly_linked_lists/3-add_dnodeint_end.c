#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of list
 * @head: pointer to poiter to list entry
 * @n: new element
 * Return: address of new node or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	tmp = *head;

	new->n = n;
	new->next = NULL;
	if (tmp == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->prev != NULL)
	{
		tmp = tmp->prev;
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
