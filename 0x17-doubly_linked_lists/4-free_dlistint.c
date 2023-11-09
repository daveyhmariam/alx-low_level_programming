#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: entry point
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
		while (head->prev)
			head = head->prev;
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}

}
