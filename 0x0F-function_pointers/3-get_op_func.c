#include "3-calc.h"
/**
 * get_op_func - operates users request
 * @s: input operator as an argument
 * Return: pointer to a func of user's choice
 * or otherwise NULL
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

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*ops[i].op == *s && s[i] == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
