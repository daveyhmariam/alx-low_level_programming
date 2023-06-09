#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc:no of arguments
 * @argv: aray of pointer to argument list
 * Return: 0 - success.
 * 1- failure
 */
int main(int argc, char **argv)
{
int i=1;
const char *s;
char *end;
int sum = 0;
if (argc <= 1)
{
printf("0\n");
return (0);
}
for (; i < argc ; i++)
{
s = argv[i];
end = argv[i];
strtol(s, &end, 10);
if (end != argv[i] || !isdigit(argv[i][0]))
{
if (*end == '\0')
{
continue;
}
else
{
printf("Error\n");
return (1);
}
}
}
for(i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}