#include "lists.h"
/**
 * listint_len - prints the number of elements
 * @h: pointer to the header of the nodes
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	for (a = 0; h; a++)
		h = h->next;

	return (a);
}
