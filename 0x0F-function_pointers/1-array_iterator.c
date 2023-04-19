#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter to an
 * array of arguments
 * @array: array of integers
 * @size: array size
 * @action: pointer to the arguments
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
