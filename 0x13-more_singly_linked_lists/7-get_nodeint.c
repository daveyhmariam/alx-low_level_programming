#include "lists.h"

/**
 * get_nodeint_at_index - find a node using index
 *
 * @head: head of a list
 * @index: index
 *
 * Return: address of node at index
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head, *n_node = NULL;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	while (current != NULL)
	{
		if (i == index)
		{
			n_node = current;
			break;
		}
		current = current->next;
		i++;
	}
	return (n_node);
}
