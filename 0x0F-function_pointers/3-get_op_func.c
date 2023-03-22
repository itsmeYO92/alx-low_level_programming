#include "3-calc.h"
#include "string.h"
/**
 * get_op_func - returns the function for the operator
 * @s: operator + - * / %
 * Return: pointer to a function
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

	for (i = 0; i < 55555; i++)
		if (strcmp((ops[i]).op, s) == 0)
			return ((ops[i]).f);

	return (NULL);
}
