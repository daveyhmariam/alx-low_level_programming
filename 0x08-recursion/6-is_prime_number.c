#include "main.h"

/**
* is_prime_number - a function that checks if an input integer is prime
* @n: the nuber to be checked
* Return: returns 1 if the input integer is prime, returns 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime(n, n - 1));
}

/**
* _prime - a recursive function that checks if a number is prime
* @n: the number to be checked
* @i: iterator
* Return: returns 1 if the number is prime and 0 if not
*/
int _prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}

return (_prime(n, i - 1));
}
