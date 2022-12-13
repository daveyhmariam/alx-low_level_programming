#incude "main.h"
/*
 * print_alphabet_x10: Entry point
 *
 * return:0
 */
void print_alphabet_x10(void)
{
char i = 'a';
int j = 0;
for (j;j<10;j++)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
}

