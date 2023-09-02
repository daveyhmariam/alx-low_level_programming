#include <stdio.h>
#include "main.h"
/**
 *_strlen_recursion - a  function that returns the length of a string
 * @s: string to be counted
 * Return: int
*/
int _strlen_recursion(char *s)
{
    if (s[0] != '\0')
        return(1 + _strlen_recursion(s + 1));
    
    return (0);
}
