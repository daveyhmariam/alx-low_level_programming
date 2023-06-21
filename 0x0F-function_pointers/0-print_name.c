#include <stdlib.h>
#include <stdio.h>

/**
 *print_name - prints the given argument using the function
 *@name:The argument to be printed
 *@f:Pointer to a function
 *Return: none
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}