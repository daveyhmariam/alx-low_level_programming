#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: the string containing 0's and 1's to be converted to integer
 *
 * Return: integer converted from binary
 *	   0 if @b contains a character other than 0 and 1
 *	   @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, uint = 0, digits = 0;

	if (!b)
		return (0);
	/*for (i = 0; b[i] != 0; i++)
		digits++;
	digits--;*/

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		uint += (b[i] - 48) *  power(2, digits - i);
	}

	return (uint);
}

/**
 * power - raise num by the exponent power
 * @num: number to be raised
 * @power: the exponent
 *
 * Return: the exponentiated number
 */
int power(int num, int power)
{
	int result = 1;

	for (; power > 0; power--)
	{
		result = result * num;
	}
	return (result);
}


