#include "lists.h"

/**
 * listint_len - printing list
 *
 * @h: head of a list
 *
 * Return: list size
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (count);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
