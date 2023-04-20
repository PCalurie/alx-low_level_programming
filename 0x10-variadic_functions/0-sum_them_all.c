#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function adds all given arguments
 * @n: number of arguments
 * @...: variable number of argumensts
 * Return: sum or else 0 if n = 0
 */
int sum_them_all(unsigned int n, ...)
{
	va_list digits;
	unsigned int i;
	int sum = 0;

	va_start(digits, n);

	for (i = 0; i < n; i++)
		sum += va_arg(digits, int);

	va_end(digits);

	return (sum);
}
