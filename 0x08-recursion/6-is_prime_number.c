#include <stdio.h>
#include "main.h"
/**
 *s_prime_number -  function that tells prime number
 * @n: int argument
 * Return: int
*/
int is_prime_number(int n)
{
    
    if (n <= 1)
        return (0);
    return (prime(n, n-1));
}
/**
 * prime - checks prime number
 * @n: the number to be checked
 * @y: divisor
 * Return: 1 for prime number 0 if not
*/
int prime(int n, int y)
{
if (y == 1)
    return (1);
if (n % y == 0 && y > 0)
    return (0);
return (prime(n, y - 1));   
}