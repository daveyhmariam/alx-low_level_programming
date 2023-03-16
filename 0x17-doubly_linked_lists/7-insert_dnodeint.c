#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node of type dlistint_t at the
 * given position @idx
 * @h: the first element of the doubly linked list
 * @idx: the position of the newly added element
 * @n: the data of the new element
 *
 * Return: address of the new node, or NULL if it fails or is not possible to
 * add the new node at @idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h_copy = *h;
	unsigned int node = 0;

	if (!*h)
	{
		*h = new_node;
		return (new_node);
	}
	while (h_copy)
	{
		if (idx == node)
		{
			new_node->n = n;
			new_node->prev = NULL;
			new_node->next = NULL;
			if (!h_copy->prev)
			{
				h_copy->prev = new_node;
				new_node->next = h_copy;
				*h = new_node;
			}
			else if (!h_copy->next)
			{
				h_copy->next = new_node;
				new_node->prev = h_copy;
			}
			else
			{
				new_node->next = h_copy;
				new_node->prev = h_copy->prev;
				h_copy->prev->next = new_node;
				h_copy->prev = new_node;
			}
			return (new_node);
		}
		node++;
		h_copy = h_copy->next;
	}
	return (NULL);
}
