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
 * binary_to_uint - change binary to integer
 *
 * @b: the binary to be converted
 *
 * Return: unsigned integer
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	int j, i = 0;

	if (b == NULL)
	return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' || b[i] != '0')
		return (0);
		i++;
	}


	for (j = i - 1, i = 0; j >= 0; j--, i++)
	{
		binary += ((int)(b[j] - '0') * twos_power(i));
	}
	return (binary);
}
