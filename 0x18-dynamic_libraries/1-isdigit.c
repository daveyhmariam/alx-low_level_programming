#include "main.h"

/**
* _isdigit - checks for a digit
* @c: the character to be checked
* Return: returns 1 if c is a digit, 0 otherwise
*/
int _isdigit(int a)
{
if (a >= 48 && a <= 57)
return (1);
else
return (0);
}
