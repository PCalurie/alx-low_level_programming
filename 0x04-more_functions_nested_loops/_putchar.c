#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: function parameter
 *
 * Return: 0 success or else -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
