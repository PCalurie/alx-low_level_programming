#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - rellocates a memory block using malloc
 * @ptr: pointer to the string to rellocate
 * @old_size: old size of the pointer
 * @new_size: new size of the pointer
 * Return: pointer with the new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;
	char *nwptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == 0)
	{
		nwptr = malloc(new_size);
		if (nwptr == 0)
			return (NULL);

		return (nwptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
		return (NULL);
		}
	}
	nwptr = malloc(new_size);
	if (nwptr == 0)
		return (NULL);

	for (n = 0; n < new_size && n < old_size; n++)
		nwptr[n] = ((char *)ptr)[n];

	free(ptr);
	return (nwptr);
}
