#include "lists.h"

/**
 * print_list - prints content of list
 *
 * @h: head node pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int length = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{

		if (!h->str)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
