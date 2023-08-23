#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - a function that sums operands
 *@a: operand
 *@b: operand
 *Return: sum
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - a function that substructs operands
 *@a: operand
 *@b: operand
 *Return: difference
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - a function that multiplies operands
 *@a: operand
 *@b: operand
 *Return: product
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - a function that devides operands
 *@a: operand
 *@b: operand
 *Return: quotient
*/
int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf ("Error\n");
exit (100);
}
/**
 *op_mod - a function that returns remainder
 *@a: operand
 *@b: operand
 *Return: quotient
*/
int op_mod(int a, int b)
{
if (b != 0)
return (a % b);
printf ("Error\n");
exit (100);
}
