#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *str);
void simple_print_buffer(char *buffer, unsigned int size);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
#endif