#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: - head of a list
 *
 * Return: head of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = *head, *temp;

	if (*head == NULL)
	return (NULL);

	*head = (*head)->next;
	reverse->next = NULL;
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = temp;
	}
	*head = reverse;
	return (*head);
}
