#include "3-calc.h"
/**
 *main - main function that calls other functions
 *to operate calculation
 *@argc: number of arguments passed
 *@argv: vector of the name of parameters passed
 *Return: 0 on success
*/
int main(int argc, char **argv)
{
int a;
int (*op)(int, int);
if (argc != 4)
{
printf ("Error\n");
exit(98);
}
op = (*get_op_func)(argv[2]);
if (op == NULL)
{
printf ("Error\n");
exit(99);
}
a = (*op)(atoi(argv[1]), atoi(argv[3]));
printf ("%d\n", a);
return (0);
}
