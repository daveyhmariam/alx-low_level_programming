#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string recursively
 * @s: a string pointer to the string to be printed
 * Return: returns nothing
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
