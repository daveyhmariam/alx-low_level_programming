#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: entry point
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	while (head->prev)
		head = head->prev;
	while (head->next != NULL && head != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
