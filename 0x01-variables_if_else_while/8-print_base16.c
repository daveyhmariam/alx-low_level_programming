#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b;
char m;
for (b = 0; b < 10; b++)
putchar(b + '0');
for (m = 'a'; m <= 'f'; m++)
putchar(m);
putchar('\n');
return (0);
}
