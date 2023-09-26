#include "lists.h"

/**
 * insert_nodeint_at_index - insers node at given index
 *
 * @head: head of a list
 * @idx: index
 * @n: node data
 *
 * Return: address of new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *current = *head, *temp;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	while (current != NULL)
	{
		if ((i + 1) == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			return (NULL);

			new->n = n;
			temp = current->next;
			current->next = new;
			new->next = temp;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (new);
}
