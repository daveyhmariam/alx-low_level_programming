#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/**
 * print_listint: Prints all elements of a list
 * @h: a pointer to the first node of the list
 * 
 * return: the number of elements in a list
*/
size_t print_listint(const listint_t *h)
{
    /*listint_t *tmp; */
    unsigned int i=0;
    if (h==NULL)
    return (0);

    while(h)
    {
        printf("%d\n",h->n);
        h=h->next;
        i++;
    }
    return (i);

}