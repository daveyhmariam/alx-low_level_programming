#include "variadic_functions.h"
/**
 * print_all - prints a specified data type
 * @format: format specifier
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
va_list l;
char *str;
int i;
i = 0;
va_start(l, format);
while (format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(l, int));
if (format[i + 1] != '\0')
printf(", ");
break;
case 'i':
printf("%d", va_arg(l, int));
if (format[i + 1] != '\0')
printf(", ");
break;
case 'f':
printf("%f", va_arg(l, double));
if (format[i + 1] != '\0')
printf(", ");
break;
case 's':
str = va_arg(l, char*);
if (str != NULL)
printf("%s", str);
if (format[i + 1] != '\0')
printf(", ");
if (str == NULL)
printf("(nil)");
if (format[i + 1] != '\0')
printf(", ");
break;
default:
break;
}
if (format[i + 1] == '\0')
break;
i++;
}
printf("\n");
return;
}