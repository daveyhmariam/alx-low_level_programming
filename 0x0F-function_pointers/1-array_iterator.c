#include "function_pointers.h"
/**
 * array_iterator - executes a function over an array
 * @array: an array argument
 * @size: size of the array
 * @action: a function pointer that takes integer and returns nothing
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL || size <= 0)
return;
for (i = 0; i < size; i++)
action(array[i]);
return;
}
