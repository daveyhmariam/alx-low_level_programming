#include<stdio.h>
#include "main.h"
/**
 * factorial - a recursion function to 
 * calculate the factorial of a given string
 * @n:factorial number
 * Return: -1 on error
 * a factorial of the number on success
 *         
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}