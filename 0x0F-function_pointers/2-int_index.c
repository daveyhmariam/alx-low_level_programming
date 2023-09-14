#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: a pointer to a function that accepts int and returns int
 * Return: on success - index of the first matched integer
 *         -1 if index is less than zero or no match is found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
for(i = 0; i < size; i++)
{
if(cmp(array[i]))
return (i);
}
return (i);
}
