#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index: returns the nth node
 * @head: first node
 * @index: index
 * return: pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    if (!head)
    {
        return (NULL);
    }
    while (head)
    {

        if (i==index)
        {
            return(head);
        }
        head=head->next;
        if(!head)
        {
            return(NULL);
        }
        i++;
    }
    return (NULL);
}
