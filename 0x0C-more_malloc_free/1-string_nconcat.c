#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * string_nconcat - unction that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied from s2
 * Return: pointer to memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1, size2;
char *ptr;
unsigned int i, j;
size1 = counter(s1);
size2 = counter(s2);

if (size2 > n)
size2 = n;
ptr = malloc(sizeof(int) * (size1 + size2 + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size1 ; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < size2 ; i++, j++)
{
ptr[i] = s2[j];
}
ptr[i] = '\0';
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
