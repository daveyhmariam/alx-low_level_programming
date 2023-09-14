#include "3-calc.h"
/**
 * get_op_function - selects the correct operator
 * @s: the second command line argument as an operator
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
int i;
for (i = 0; i < 5; i++)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
}
return (NULL);
}