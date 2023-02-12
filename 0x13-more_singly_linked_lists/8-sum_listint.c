#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * sum_listint: sum all element
 * @head: head node
 * return: int
*/

int sum_listint(listint_t *head)
{
    int sum=0;
    if (!head)
    return (sum);
    while(head)
    {
        if(head->n)
        {
            sum += head->n;
        }
        head=head->next;
    }
    return (sum);
}
