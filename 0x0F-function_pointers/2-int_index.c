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
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int count, check;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (count = 0; count < size; count++)
{
check = cmp(array[count]);
if (check != 0)
return (count);
}
return (-1);
}
