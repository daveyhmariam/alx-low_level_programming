#include "lists.h"

/**
 * print_dlistint - prints all elements of doubly linked list
 * @h: entry point to a doubly linked list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
		}
	return (nodes);
}
