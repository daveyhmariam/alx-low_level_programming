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

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		count = 1;
		tmp = *h;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (count == idx)
			{
				if (tmp->next == NULL)
				{
					new = add_dnodeint_end(h, n);
				}
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (tmp != NULL)
					{
						new->n = n;
						new->next = tmp->next;
						new->prev = tmp;
						tmp->next->prev = new;
						tmp->next = new;
					}
				}
				break;
			}
			tmp = tmp->next;
			count++;
		}
		}
	return (new);
}
