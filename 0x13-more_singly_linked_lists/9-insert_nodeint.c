#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index: insert a node at an index
 * @head: head node
 * @idx: index
 * @n: data
 * return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
   listint_t *tmp;
   listint_t *new;
   new=malloc(sizeof(listint_t));
   if (!new)
   return (NULL);
   new->n=n;
   if(!(*head))
   {
    (*head)=new;
    new->next=NULL;
    return (new);
   }
   tmp=(*head);
   while(idx>1)
   {
    tmp=tmp->next;
    idx--;
   }
   new->next=tmp->next;
   tmp->next=new;
   return (new);
}