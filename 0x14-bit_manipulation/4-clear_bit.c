#include "main.h"

/**
 * twos_power - fin power of 2's
 *
 * @pow: power for the base
 *
 * Return: integer
 *
 */

int twos_power(int pow)
{
	int num = 1;

	while (pow > 0)
	{
		num *= 2;
		pow--;
	}
	return (num);
}

/**
 * clear_bit - set a specific bit to 0
 *
 * @n: pointer to integer
 * @index: index to be set
 *
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;
	unsigned int bits;

	bits = sizeof(unsigned int) * 8;

	if (index > bits)
	return (-1);

	if (n == NULL)
	return (-1);

	clear = twos_power(index);
	clear = (~clear);
	*n = (*n & clear);

	return (1);
}
