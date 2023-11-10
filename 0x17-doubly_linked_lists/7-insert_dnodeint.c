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
	dlistint_t *new, *tmp;
	unsigned int count;

	count = 0;
	tmp = *h;
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (!tmp)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = tmp;
		new->prev = NULL;
		tmp->prev = new;
		return (new);
	}

	while (++count != idx)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			return (NULL);
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	return (new);

}
