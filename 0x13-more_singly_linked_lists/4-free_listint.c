#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: head of a list
 *
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
