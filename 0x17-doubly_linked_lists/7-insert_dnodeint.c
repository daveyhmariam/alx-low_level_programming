#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: pointer to pointer to entry point
 * @idx: index to be inserted at
 * @n: new element
 * Return
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp, *new;
    unsigned int count;

    new = (dlistint_t *) malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    tmp = *h;
    count = 0;

    while (tmp->prev != NULL)
    {
        tmp = tmp->prev;
    }

    while (tmp != NULL)
    {
        if (count == idx)
            break;
        tmp = tmp->next;
        count++;
    }
    if (tmp == NULL)
        return (NULL);
    new->next = tmp;
    new->prev = tmp->prev;
    (new->prev)->next = new;
    tmp->prev = new;
    return (new);

}
