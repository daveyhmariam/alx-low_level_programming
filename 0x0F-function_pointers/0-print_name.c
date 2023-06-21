#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - prints the given argument using the function
*@name:The argument to be printed
*@f:Pointer to a function a that accepts
*a string and returns nothing
*Return: none
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
return;
}