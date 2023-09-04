#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly
 *           allocated space in memory, which contains
 *           a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: Returns NULL if str = NULL
 *         pointer to the duplicated string.
 *         NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
int len;
int i;
char *s;
i = 0;
if (str == NULL)
return (NULL);
len = _strlen(str) + 1;
s = (char *) malloc(sizeof(char) * len);
if (s == NULL)
return (NULL);
while (i < len)
{
s[i] = str[i];
i++;
}
s[i] = '\0';
return (s);
}
/**
 * _strlen - a function that counts length of a string
 * @str: string length
 * Return: length of the string
*/
int _strlen(char *str)
{
int count = 0;
if (!str)
return (0);
while (str[count] != '\0')
{
count++;
}
count++;
return (count);
}
