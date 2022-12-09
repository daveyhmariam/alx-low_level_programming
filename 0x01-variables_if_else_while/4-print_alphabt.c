#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
if (n != 'e' && n != 'q')
putchar(n);
}
putchar('\n');

return (0);
}
