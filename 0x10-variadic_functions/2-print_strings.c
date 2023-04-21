#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function prints a string
 * @separator: string to be printed
 * @n: number of strings passed in the argument
 * @...: variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", (char *)separator);
	}
	va_end(strings);

	printf("\n");
}
