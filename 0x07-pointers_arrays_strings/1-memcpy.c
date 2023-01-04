#include "main.h"
#include <stdio.h>

/**
 * copy a byte of data to a memory area
 * @dest: the address of memory to copy to
 * @src: the address of memory to copy from
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i=0;
    for(i;i<n;i++)
    {
        dest[i]=src[i];
    }
    return (dest);
}