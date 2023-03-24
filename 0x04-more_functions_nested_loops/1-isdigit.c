#include "main.h"

/**
 * _isdigit - check if character is digit
 * @c: function parameter
 *
 * Return: 1 for a character digit or else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
