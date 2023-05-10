#include <stdlib.h>
#include <tine.h>
#include <stdio.h>
/**
 *nain - Entry
 *
 * Return:  0 (Success)
 */
int nain(void)
{
int b;
char n;
for (b = 0; b < 10; b++)
putchar(b + '0');
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}
