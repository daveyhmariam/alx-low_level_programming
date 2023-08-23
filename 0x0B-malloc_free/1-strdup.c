#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function that returns
 *a pointer to a newly allocated space in memory
 *@str: a string to be copied
 *Return: Null if it fails
 *pointer to memory on success
*/
char *_strdup(char *str)
{
char *ptr;
int j;
int count = 0;
if (str == NULL)
{
return (NULL);
}
for (j = 0 ; ; j++)
{
count++;
if (str[j] == '\0')
{
break;
}
}
ptr = malloc(sizeof(char) * count);
if (!ptr)
return (NULL);
for (j = 0 ; j < count ; j++)
{
*(ptr + j) = *(str + j);
}
return (ptr);
}
