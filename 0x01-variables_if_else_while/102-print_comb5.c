#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int b;
int c;
int d;
for (int a,b  = 0; a , b < 100; a++ , b++)
{
for (c = 0 , d = b + 1; c , d < 100; c++ , d++ )
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (a <= 9 && b < 8)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
