#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum 
 * number of coins to make change for an amount of money.
 * @argc: the number of command-line arguments
 *  @argv: an array of strings containing the command-line arguments
 * Return: number number of minimum coin
 * 1 no argument 
*/
int main(int argc, char **argv)
{
int q, p, f, t, o;
int change;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
}
change = atoi(argv[1]);
q = change / 25;
change= change % 25;
p = change / 10;
change = change % 10;
f = change / 5;
change %= 5;
t = change / 2;
change %= 2;
o = change / 1;

change = q + p + f + t + o;
printf("%d\n", change);
return (0);
}
