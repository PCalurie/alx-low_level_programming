#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints everything in a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
