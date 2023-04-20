#include "variadic_functions.h"
#include <stdarg.h>
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
			if (format[i] == 'c')
			{
				all = va_arg(args, int);
				printf("%c", all);
			}
			else if (format[i] == 'i')
			{
				all = va_arg(args, int);
				printf("%d", all);
			}
			else if (format[i] == 'f')
			{
				all = va_arg(args, double);
				printf("%f", all);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);

				if (str == NULL)
					str = "(nil)";

			printf("%s", all);
			}
		}
		if ((format[i + 1] && strchr("cifs", format[i]))
			printf("%s", separator);
			separator = ", ";
		i++;

	}
	printf("\n");

	va_ends(all);
}
