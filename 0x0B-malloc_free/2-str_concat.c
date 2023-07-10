#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: the address of memory to first string
 * @s2: the size of the memory to second string
 * Return: pointer to the new string.
 */
char *str_concat(char *s1, char *s2)
{
int j;
int i = 0;
int size1, size2;
char *ptr;
size1 = counter(s1);
size2 = counter(s2);
ptr = malloc(sizeof(char) * (size1 + size2 + 1));
if (!ptr)
return (NULL);
for (j = 0; j < size1; j++)
{
if (s1[j] == '\0')
break;
*(ptr + j) = *(s1 + j);
}
for (; j < (size1 + size2); j++)
{
*(ptr + j) = *(s2 + i);
i++;
}
return (ptr);
}
/**
 * counter - counts the size of a string
 * @str: the string arg
 * Return: the size of str
*/
int counter(char *str)
{
int i;
int c = 0;
if (str != NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
c++;
}
}
return (c);
}
