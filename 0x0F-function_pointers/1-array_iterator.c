#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - a function that effects
 *a function parameter on elements of array
 *@array: a array to be operand
 *@size: size of an array
 *@action: a function pointer pointing to
 *operating function accepting int and returning void
 *Return: nothing
 *  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t count;
if (array == NULL || action == NULL)
return;
for (count = 0; count < size; count++)
(*action)(array[count]);
return;
}