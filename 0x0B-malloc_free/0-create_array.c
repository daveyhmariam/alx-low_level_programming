#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the char
 * @c: the char to be written
 * Return: NULL if size = 0
 *         pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;
if (size == 0)
return (NULL);
arr = (char *) malloc(sizeof(char) * size);
if (!arr)
return (NULL);
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
