#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array of strings.
 */
int **alloc_grid(int width, int height)
{
int i;
int **ptr;
if (width <= 0 || height <= 0)
return (NULL);
ptr = malloc(sizeof(int *) * height);
if (!ptr)
{
free(ptr);
return (NULL);
}
for (i = 0; i < width; i++)
{
*(ptr + i) = malloc(sizeof(int) * width);
if (!(*ptr))
{
free(*ptr);
return (NULL);
}
**(ptr + i) = 0;
}
return (ptr);
}
