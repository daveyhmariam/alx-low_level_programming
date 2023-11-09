#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: pointer to pointer to a list node
 * @index: index at which to delete node
 * Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp, *next, *prev;
    unsigned int count;

    if (!head || !(*head))
        return (-1);
    tmp = *head;
    count = 0;
    while (tmp->prev)
    {
        tmp = tmp->prev;
    }

	while (tmp)
	{
		if (count == index)
			break;
		tmp = tmp->next;
		count++;
	}
	if (!tmp)
		return (-1);
    next = tmp->next;
	prev = tmp->prev;

	if (next && prev)
	{
		next->prev = prev;
		prev->next = next;
		*head = prev;
		free(tmp);
		return (1);
	}
	else
	{
		if (!next && prev)
			{
				prev->next = NULL;
				*head = prev;
				free(tmp);
				return (1);
			}
		if (!prev && next)
			{
				next->prev = NULL;
				*head = next;
				free(tmp);
				return (1);
			}
		else
		{
			*head = NULL;
			free(tmp);
			return (1);
		}
	}


    return (-1);

}
