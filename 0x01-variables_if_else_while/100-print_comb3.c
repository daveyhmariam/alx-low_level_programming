#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int low, high;
for (low = 0; low < 10; low++)
{
for (high = low + 1; high < 10; high++)
{
putchar(low + '0');
putchar(high + '0');

if (low < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
