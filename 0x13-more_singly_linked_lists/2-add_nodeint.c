#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * listint_t: adds a node at the beginning
 * @head:a pointer to a pointer of first node i a list
 * @n: data
 * return: listint_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t* new;
    new=malloc(sizeof(listint_t));
    if(!new)
    return(NULL);
    new->n=n;
    if(*head==NULL)
    {
    (*head)=new;
    new->next=NULL;
    return(*head);    
    }
    new->next=(*head);
    (*head)=new;
    return(new);
}