#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - function prints all data types
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;

	va_list all;
	va_start(all, format);

	for (i = 0; format && format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%d", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);

				if (str == NULL)
					str = "(nil)";

				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] && strchr("cifs", format[i]))
		{
			printf(", ");

		i++;
		}

	}

	va_end(all);
	printf("\n");
}
