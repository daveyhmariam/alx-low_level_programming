#include "main.h"

/**
 * get_bit - get specefic bit from binary
 *
 * @n: decimal number
 * @index: index to be find
 *
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;
	unsigned int bits;

	bits = sizeof(unsigned int) * 8;

	if (index > bits)
	return (-1);

	n = n >> index;
	value = n & 1;

	return (value);
}
