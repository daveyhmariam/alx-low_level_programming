#ifndef BIT_MAN_H
#define BIT_MAN_H

#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int power(int num, int power);
int _putchar(char c);
int get_endianness(void);

#endif /* BIT_MAN_H */

