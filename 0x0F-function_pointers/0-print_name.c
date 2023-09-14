#include "function_pointers.h"
/**
 * print_name - passes the given data argument to function passed
 * @name: data argument
 * @f: pointer to a function accepting string and returning nothing
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
