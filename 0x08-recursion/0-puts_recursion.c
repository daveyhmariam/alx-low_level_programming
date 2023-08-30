#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *_puts_recursion -  prints a string, followed by a new line
 *@s: string to be prited
 *Return: return a nonnegative number on success, or EOF on error
*/
void _puts_recursion(char *s)
{
    if (s[0] != '\0')
    {
        _putchar(*s);
        _puts_recursion(s + 1);
        return;
    }
    else
    {
        _putchar('\n');
    }
    return;
}
