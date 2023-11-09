#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: pointer to pointer to entry point
 * @idx: index to be inserted at
 * @n: new element
 * Return: pointer to new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int count;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	count = 0;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	tmp = *h;
	while (tmp->prev)
	{
		tmp = tmp->prev;
	}

	while (count < idx)
	{
		if (tmp->next)
			tmp = tmp->next;
		if (!(tmp->next))
			return (NULL);
		count++;
	}
	if (tmp)
	{
		new->next = tmp;
	}
	if (!tmp)
	{
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	if (tmp->prev)
	{
		new->prev = tmp->prev;
		tmp->prev->next = new;
	}
	if (!(tmp->prev))
		new->prev = NULL;
	tmp->prev = new;
	return (new);
}
