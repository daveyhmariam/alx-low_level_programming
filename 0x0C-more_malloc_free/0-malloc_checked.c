#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int to initialize
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (!ptr)
exit(98);
return ptr;
}