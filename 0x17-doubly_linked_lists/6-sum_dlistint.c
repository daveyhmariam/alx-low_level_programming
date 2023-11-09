#include "lists.h"

/**
 * sum_dlistint - sum of all elemets of linked list
 * @head: entry point
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
    int sum;
    dlistint_t *tmp;

    if (!head)
        return (0);
    sum = 0;
    while (tmp->prev != NULL)
        tmp = tmp->prev;
    while (tmp != NULL)
    {
        sum = sum + tmp->n;
        tmp = tmp->next;
    }
    return (sum);
}
