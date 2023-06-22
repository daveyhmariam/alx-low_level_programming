#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - variadic function that
 *prints all the arguments
 *@separator: symbol to be printed between arguments
 *@n: number of arguments
 *Return: void  
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int num;
va_start(args, n);
for (num = 1; num <= n; num++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && num != n)
printf("%s", separator);
}
printf ("\n");
return;
}
