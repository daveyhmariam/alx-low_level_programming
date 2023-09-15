#include "variadic_functions.h"
/**
 * print_strings - prints string arguments
 * @separator: separator between strings
 * @n: number of string args
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list l;
unsigned int i;
char *str;
va_start(l, n);
for (i = 0; i < n; i++)
{
str = va_arg(l, char *);
if (str != NULL)
printf("%s", str);
if (str == NULL)
printf("(nil)");
if (n == i + 1)
break;
if (separator != NULL)
printf("%s", separator);
}
va_end(l);
printf("\n");
return;
}
