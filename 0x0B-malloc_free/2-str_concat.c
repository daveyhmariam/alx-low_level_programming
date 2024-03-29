#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: NULL on failure
 *         Pointer to the concateated string
*/
char *str_concat(char *s1, char *s2)
{
int len;
int i, c;
char *arr;
i = 0;
c = 0;
len = _strlen(s1) + _strlen(s2) + 1;
arr = (char *) malloc (sizeof(char) * len);
if (!arr)
return (NULL);
if (s1 != NULL)
{
while (i < len && s1[i] != '\0')
{
arr[i] = s1[i];
i++;
}
}
if (s2 != NULL)
{
while (i < len && s2[c] != '\0')
{
arr[i] = s2[c];
i++;
c++;
}
}
arr[i] = '\0';
return (arr);
}
/**
 * _strlen - a function that counts length of a string
 * @str: string length
 * Return: length of the string
*/
int _strlen(char *str)
{
int count = 0;
if (str != NULL)
{
while (str[count] != '\0')
{
count++;
}
}
return (count);
}
