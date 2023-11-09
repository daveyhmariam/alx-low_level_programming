#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of a list
 * @head: referencial parameter for list entry
 * @n: the new element
 * Return: the address of the new node or NULL of failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (h == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
		}
	else
		{
			while (h->prev != NULL)
				h = h->prev;
		new->next = h;
		}
	h->prev = new;
	*head = new;
	return (new);
}
