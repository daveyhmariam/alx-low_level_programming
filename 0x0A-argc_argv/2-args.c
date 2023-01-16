#include <stdio.h>
/**
* main - a program that prints all arguments it receives 
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: returns 0 (success)
*/

int main(int argc, char* argv[])
{
    for (int count=0;count<argc;count++)
    {
        printf("%s\n",argv[count]);
    }
    return (0);
}