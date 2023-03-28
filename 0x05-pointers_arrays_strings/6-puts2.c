#include "main.h"
/**
 * puts2 - prints the second number in the string
 * @str: function parameter
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
