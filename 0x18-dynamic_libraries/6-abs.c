#include "main.h"
/**
 * _abs - writes the absolute value of an integer
 * @n: an absolute value of an int
 * Return: the absolute value of n, 0 otherwise
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	if (n < 0)
		return (-n);

	return (0);
}
