#include "main.h"
/**
 * _abs - function computes the absolute value of an integer.
 * @i: function parameter
 * Return: Always 0
 *
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
	}
	else if (i >= 0)
	{
		i = i;
	}
	return (i);
}
