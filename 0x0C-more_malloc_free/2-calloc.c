#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array
 * @nmemb: memory elements
 * @size: bytes allocated
 * Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int n, len;
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	pt = malloc(len);
	if (pt == NULL)
		return (NULL);

	for (n = 0; n < len; n++)
		pt[n] = 0;

	return (pt);
}
