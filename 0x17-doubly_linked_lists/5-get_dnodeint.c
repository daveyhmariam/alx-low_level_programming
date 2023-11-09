#include "lists.h"

/**
 * get_dnodeint_at_index - return specified node
 * @head: entry point to linked list
 * @index: specified index of node
 * @return: poiter to a node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count;
    dlistint_t *tmp;


    if (!head)
        return (NULL);
    count = 0;
    tmp = head;
    for (; count <= index && tmp; count++)
    {
        if (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
        else
            {
                return (NULL);
            }
    }
    return (tmp->prev);
}
