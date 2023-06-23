
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - prototype 
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int d = 0;

	while (ops[d].op != NULL && *(ops[d].op) != *s)
		d++;

	return (ops[d].f);
}
