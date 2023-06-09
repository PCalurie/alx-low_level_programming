#include "function_pointers.h"
/**
 * print_name - prints a name and argument passed by f
 * @name: pointer to the name to print
 * @f: function to the argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
