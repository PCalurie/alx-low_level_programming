#include "main.h"

/**
 * swap_int - swaps values of two pointers
 * @a: function parameter 1
 * @b: function parameter 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
