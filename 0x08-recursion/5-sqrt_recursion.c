#include "main.h"


/**
* _sqrt_recursion - a function that returns the square root of a number
* @n: the number to be operated on
* Return: returns the square root of n as an int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}

/**
 * _sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @r: iterator
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int r)
{
if (r * r > n)
return (-1);
if (r * r == n)
return (r);
return (_sqrt(n, r + 1));
}
