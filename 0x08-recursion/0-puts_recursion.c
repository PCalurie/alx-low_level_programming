#include "main.h"
/**
 * _puts_recursion - prints characters of a string
 * @s: pointer to the string with the characters
 */

void  _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
