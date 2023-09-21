#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head: head of a list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current = head, *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
	head = NULL;
}
