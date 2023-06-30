#include "lists.h"

/**
* list_len - returns the number of elements in a
* linked list
* @h: pointer to a linked list
* Return: returns the number of elements in h
*/
size_t list_len(const list_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			size++;
		h = h->next;
	}
	return (size);
}