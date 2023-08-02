#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * _nodeint_end: add node at the list end
 * @head: the first node
 * @n: data
 * return: listint_t new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *tmp;
    listint_t *new;

    new=malloc(sizeof(listint_t));
    if(!new)
    return(NULL);
    new->n=n;
    new->next=NULL;
    tmp=(*head);
    if (!(*head))
    {
        (*head)=new;
        return(new);
    }
    while(tmp->next)
    {
        tmp=tmp->next;
    }
    tmp->next=new;
    return(new);
}