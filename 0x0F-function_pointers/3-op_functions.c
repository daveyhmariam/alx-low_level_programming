#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: arg 1
 * @b: arg 2
 * Return: result
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub two numbers
 * @a: arg 1
 * @b: arg 2
 * Return: result
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: arg 1
 * @b: arg 2
 * Return: result
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: arg 1
 * @b: arg 2
 * Return: result
*/

int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf ("Error\n");
exit(98);
}

/**
 * op_mod - reminder of two numbers
 * @a: arg 1
 * @b: arg 2
 * Return: result
*/
int op_mod(int a, int b)
{
if (b != 0)
return (a % b);
printf ("Error\n");
exit(98);
}