#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_listint_t: frees a list 
 * @head: first node
 * 
 * return: void
*/

void free_listint(listint_t *head)
{
    listint_t *tmp;
    while(head)
    {
        tmp=head->next;
        free(head);
        head=tmp;
    }
}