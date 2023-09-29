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
 * set_bit - set specific bit to 1
 *
 * @n: pointer to number
 * @index: index to be set
 *
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int set;
	unsigned int bits;

	bits = sizeof(unsigned int) * 8;

	if (index > bits)
	return (-1);

	if (n == NULL)
	return (-1);

	set = twos_power(index);
	*n = (*n | set);

	return (1);
}
