#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: head of a list
 * @index: index
 *
 * Return: integer
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (current != NULL)
	{
		if ((i + 1) == index)
		{
			temp = current->next->next;
			free(current->next);
			current->next = temp;
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
