#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* function returns when pointer is at null char */
		return;

	s++; /* increaments the pointer to the next character */
	_print_rev_recursion(s); /* calls the pointer recursively */
	_putchar(*s); /* prints the string in reverse as called */
}
