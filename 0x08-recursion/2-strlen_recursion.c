#include<stdio.h>
#include "main.h"
/**
 *_strlen_recursion - a recursion function that returns the length of string
 *@s: apointer to string
 *Return: returns length of the string
*/
int _strlen_recursion(char *s)
{
if (*s=='\0')
{
return 0;
}
else
return(1+_strlen_recursion(s+1));
}
