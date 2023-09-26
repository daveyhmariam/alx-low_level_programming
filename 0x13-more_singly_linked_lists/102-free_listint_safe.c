#include "lists.h"

/**
 * free_listint_safe - free list safely
 *
 * @h:head of a list
 *
 * Return: number of freed node
 *
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int len = 0, check;

	if (*h == NULL)
	return (0);


	while (h != NULL)
	{
		check = *h - ((*h)->next);
		if (check > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
