#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int low;
int  med;
int high;
for (low = 0; low < 10; low++)
{
for (med = low + 1; med < 10; med++)
{
for (high = med + 1; high < 10; high++)
{
putchar(low + '0');
putchar(med + '0');
putchar(high + '0');
if (low < 7)
{
putchar(',');
putchar(' ');
}

}
}
}
putchar('\n');
return (0);
}
