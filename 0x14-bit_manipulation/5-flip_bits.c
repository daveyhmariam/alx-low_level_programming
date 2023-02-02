#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: 0 if both numbers are equal, a positive number if they are not
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_to_flip = 0;
	int i;

	for (i = 0; i < 64; i++)
	{
		if ((1 & n >> i) == (1 & m >> i))
			continue;
		bits_to_flip++;
	}

	return (bits_to_flip);
}
