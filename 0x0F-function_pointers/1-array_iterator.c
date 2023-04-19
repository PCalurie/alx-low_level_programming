#include "function_pointers.h"
/**
 * array_iterator - function  executes a functionj pointedas as
 * an array parameter
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function used
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
