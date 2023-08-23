#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 * @size: size of the allocated memory
 * @c: initializing char
 * Return:NULL if size = 0
 * a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
