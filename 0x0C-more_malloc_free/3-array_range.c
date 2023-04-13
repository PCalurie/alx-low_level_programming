#include "main.h"
#include <stdlib.h>
/**
 * array_range - prints an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int n, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (n = 0; min <= max; n++)
	{
		arr[n] = min;
		min++;
	}
	return (arr);
}
