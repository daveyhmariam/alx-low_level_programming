#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - variadic function that
 *sums up all the arguments
 *@n: the number of argumnts passed 
 *Return: int
 *0 if n == 0
 *  
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int count;
va_list l;
if (n == 0)
return (0);
va_start(l, n);
for (count = 0; count < n; count++)
sum += va_arg(l, int);
return (sum);
}
