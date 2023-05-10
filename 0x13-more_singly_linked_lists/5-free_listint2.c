#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_listint2: free a list
 * @head: a pointer to first node
 * 
 * return: void
 * 
*/
void free_listint2(listint_t **head)
{
    listint_t *tmp;
    tmp=(*head);
    while((*head))
    {
        tmp=(*head)->next;
        free((*head));
        (*head)=tmp;
    }
    head=NULL;

}
