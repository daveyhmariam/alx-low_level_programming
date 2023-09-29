#include "main.h"

/**
 * get_endianness - checks if the computer arch
 * is little or endian
 *
 * Return: integer
 *
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte)
	return (1);
	return (0);
}
