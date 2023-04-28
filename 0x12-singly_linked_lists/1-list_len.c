#include "lists.h"
#include <stddef.h>
/**
 * list_len - function print the number of nodes
 * @h: header
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
