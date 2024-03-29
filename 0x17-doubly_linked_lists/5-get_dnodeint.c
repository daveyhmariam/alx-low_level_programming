#include "lists.h"

/**
 * get_dnodeint_at_index - return specified node
 * @head: entry point to linked list
 * @index: specified index of node
 * Return: pointer to a node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp;


	if (!head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	count = 0;
	tmp = head;
	for (; count < index; count++)
	{
		tmp = tmp->next;

		if (tmp == NULL)
		{
			return (NULL);
		}
	}
	return (tmp);
}
