#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints all arguments passed
 * @argc:no of arguments
 * @argv: aray of pointer to argument list
 * Return:
*/
int main(int argc, char **argv)
{
int i=0;
for(;i < argc;i++)
{
printf("%s\n", argv[i]);
}
return (0);
}