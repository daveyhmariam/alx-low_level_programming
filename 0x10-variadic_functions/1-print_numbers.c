#include "variadic_functions.h"
/**
 * print_numbers - a function that prints all integer args with separator
 * @separator: a separator sign
 * @n: number of args
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list l;
unsigned int i;
va_start(l, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(l, int));
if (n == i + 1)
break;
if (separator != NULL)
printf("%s", separator);
}
va_end(l);
printf("\n");
return;
}
