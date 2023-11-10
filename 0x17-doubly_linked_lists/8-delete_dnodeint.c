#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: pointer to pointer to a list node
 * @index: index at which to delete node
 * Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;
	unsigned int count;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	while (tmp->prev)
		tmp = tmp->prev;
	if (index == 0)
	{
		del = tmp;
		tmp = tmp->next;
		if (tmp)
			tmp->prev = NULL;
		*head = tmp;
		free(del);
		return (1);
	}
	else
	{
		count = 1;
		while (tmp)
		{
			if (count == index)
			{
				del = tmp->next;
				if (!del)
					return (-1);
				tmp->next = del->next;
				if (del->next)
					del->next->prev = tmp;
				*head = tmp;
				free(del);
				return (1);
			}
			count++;
			tmp = tmp->next;
		}
	}
	return (-1);
}
