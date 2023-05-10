#include "main.h"
#include <stdio.h>

/**
* print_diagsums - a function that prints the sum of
* the two diagonals of a square matrix of integers
* @a: pointer to the array
* @size: size of the array
* Return: returns nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int n = 0, m = 0, p = 1;
	long int dj = 0, di = 0;

	for (i = 0; i < size; i++)
	{
		dj += a[(size * m) + m];
		m++;
	}
	for (i = 0; i < size; i++)
	{
		di += a[(size * n) + (size - p)];
		n++;
		p++;
	}
	printf("%ld, %ld\n", dj, di);
}
