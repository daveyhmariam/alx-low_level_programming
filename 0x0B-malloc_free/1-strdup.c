#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space in memory
 @str: a string to be copied
 Return: Null if it fails
         pointer to memory on success
*/
char *_strdup(char *str)
{
char* ptr;
int i = 0;
if (str == NULL)
return (NULL);
for (;*(str + i) != '\0'; i++)
{

}
ptr = malloc(sizeof(char) * i);
if (!ptr)
return (NULL);
*ptr = *str;
return (ptr);
}
