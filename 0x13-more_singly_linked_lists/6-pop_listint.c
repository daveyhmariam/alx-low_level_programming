#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint: pops the head element and deletes the head
 * @head: the head node
 * 
 * return: the head element
*/


int pop_listint(listint_t **head)
{
    unsigned int n=0;
    listint_t *tmp;
    if (!(*head))
    return (n);
    
    tmp=(*head)->next;
    n=(*head)->n;
    free((*head));
    (*head)=tmp;
    return(n);

}