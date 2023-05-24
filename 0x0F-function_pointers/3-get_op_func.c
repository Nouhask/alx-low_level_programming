#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Selects the correct function to do the operation asked by the user
 * 
 * @s: The operator passed as argument
 *
 * Return: a pointer to the function correspondin to the operator given as a parameter
 *
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

	int nu = 0;

	while (ops[nu].op != NULL && *(ops[nu].op) != *s)
		nu++;

	return (ops[nu].f);
}
