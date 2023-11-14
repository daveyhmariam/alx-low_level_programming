#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that 
 * @hay_: the string to be tested
 * @ndl: the substring to be searched for
 * Return: returns a pointer 
 * located substring, or NULL 
 */
char *_strstr(char *hay_, char *ndl)
{
	int i, j = 0, k;

	for (i = 0; hay_[i] != 0; i++)
	{
		k = i;
		j = 0;
		for (; ndl[j] != 0; )
		{
			if (hay_[k++] == ndl[j++])
			{
				continue;
			}
			break;
		}
		if (ndl[j] == '\0')
			return ((hay_ + i));
	}
	return (NULL);
}
