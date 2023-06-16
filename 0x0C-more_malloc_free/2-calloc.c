#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array,
 * @nmemb: nmber of elemetsof the memory
 * @size: size of each element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (!ptr)
return (NULL);
for (i=0; i < nmemb ; i++)
{
ptr[i] = 0;
}
return ((void *) ptr);
}
