#include "main.h"

/**
 * print_last_digit - function prints the last digit
 *
 * @n: function parameter
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
