#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - choose the right function to do the operation that user asked
 * 
 * @s: The operator passed as argument
 *
 * Return: pointer to the function agree with the operator given as a constant
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
