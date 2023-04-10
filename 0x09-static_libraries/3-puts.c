#include "main.h"
/**
 * _puts - prints a string
 * @s: string to be printed
 */
void _puts(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
