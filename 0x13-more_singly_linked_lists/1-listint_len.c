#include<stdio.h>
#include "lists.h"

/**
 * listint_len: returns the number of node
 * @h: a pointer to the first node of the list
 * 
 * return: the number of elements in a list
*/

size_t listint_len(const listint_t *h)
{
    int nodes=0;
    if (h==NULL)
    return(0);
    while(h)
    {
        if(h->n)
        nodes++;
        h=h->next;
    }
    return(nodes);
}