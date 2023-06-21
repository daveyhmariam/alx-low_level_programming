#include <stdlib.h>
#include <stdio.h>

/**
 *print_name - prints the given argument using the function
 *@name - the argument to be printed
 *@f - pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}