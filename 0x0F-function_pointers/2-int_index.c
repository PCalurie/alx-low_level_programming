#include "functio_pointers"
#include <stdio.h>
/**
 * int_index - function searches for an integer
 * @size: number of elements
 * @cmp: a pointer to a function that compares values
 * @array: array of integers
 * Return: 0 sucees or else -1
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	if (array && cmp && size > 0)
	{
		for (a = 0; a <= size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}
	return (-1);
}
