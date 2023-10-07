#include "main.h"

/**
 * flip_bits- number of bit change from n to get to m
 *
 * @n: integer
 * @m: integer
 *
 * Return: number of bit change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = 0, num;

	num = n ^ m;

	while (num != 0)
	{
		if ((num & 1) == 1)
		flips++;

		num = num >> 1;
	}
	return (flips);
}
