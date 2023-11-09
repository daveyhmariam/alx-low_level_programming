#include "lists.h"

/**
 * dlistint_len - returns the number of elements in doubly linked list
 * @h: entry point
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	elements = 0;
	if (!h)
		return (elements);
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
