#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to print
 * @n: number of integers passed
 * @...: variable function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	unsigned int i;

	va_start(digits, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digits, int));

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf('\n');

	va_end(digits);
}
