#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: first argument
 * Return: 0 if n is zero or sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list l;
unsigned int i;
int result;
result = 0;
i = 0;
if (n == 0)
return (0);
va_start(l, n);
for (; i < n; i++)
{
result += va_arg(l, int);
}
va_end (l);
return (result);
}
