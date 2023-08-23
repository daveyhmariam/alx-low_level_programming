#include<stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc:no of arguments
 * @argv: array of pointer to argument list
 * Return: number of argument passed
*/
int main(int argc, __attribute__((unused))char **argv)
{
printf("%d\n", argc-1);
return(0);
}
