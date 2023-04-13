#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function allocates memory using malloc
 * @b: the size of memory to allocate
 * Return: pointer to the mem
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
