#include "main.h"
/**
 * _pow_recursion - calculares the power of a number recursively
 * @a: the number to raise to a power
 * @b: the power
 * Return: 0 success or els -1 error
 */
int _pow_recursion(int a, int b)
{
	if (b == 0)
	return (1);

	if (b < 0)
	return (-1);

	return (a * _pow_recursion(a, b - 1));
}
