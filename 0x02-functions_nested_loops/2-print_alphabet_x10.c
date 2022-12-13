#include "main.h"
/*
 * print_alphabet_x10: Entry point
 *
 * return:0
 */
void print_alphabet_x10(void)
{
char i = 'a';
int j = 0;
while (j < 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
j++;
_putchar('\n');
}
}

