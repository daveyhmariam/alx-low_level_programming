#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: entry point
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->prev)
		head = head->prev;
	while (head != NULL)
	{
		if (head->prev != NULL)
		{
			tmp = head->prev;
			free(tmp);
		}
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head = head->next;
	}

}
