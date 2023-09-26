#include "lists.h"

/**
 * print_listint - printing list
 *
 * @h: head of a list
 *
 * Return: list size
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
