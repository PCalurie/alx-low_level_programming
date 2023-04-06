#include "main.h"
/**
 * _puts_recursion - prints characters of a string
 * @s: pointer to the string with the characters
 */

void  _puts_recursion(char *s)
{
	if (*s == '\0') /* checks if the pointer is at null char */
	{
		_putchar('\n'); /* then adds a new line */
		return;
	}

	_putchar(*s); /* pointer is called with the current char */
	s++; /* increaments pointer with next value of char */
	_puts_recursion(s); /* prints the recursed string on terminal */
}
