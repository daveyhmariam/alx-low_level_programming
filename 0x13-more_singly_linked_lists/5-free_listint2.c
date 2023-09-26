#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: head of a list
 *
 * Return: nothing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current = *head;

	if (*head == NULL || head == NULL)
	return;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
