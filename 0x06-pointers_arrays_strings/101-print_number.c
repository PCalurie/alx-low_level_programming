#include "main.h"

/**
 * print_number - prints an integer.
 * @n: int to print
 */

void print_number(int n)
{
	unsigned int i = n;
/* if 'n' is negative, print a '-' character and make 'i' positive */
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
/* if i has more than one digit recursively call print_number on its quotient*/
	if ((i / 10) > 0)
		print_number(i / 10);
/* print the last digit of 'i' by adding it ASCII code to '0' */
	_putchar((i % 10) + '0');
}
