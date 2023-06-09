#include<stdio.h>

/**
 * main - prints the name of the program
 * @argc:no of arguments
 * @argv: aray of pointer to argument list
 * Return: 0 on success
*/
int main(__attribute__((unused)) int argc, char **argv)
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}