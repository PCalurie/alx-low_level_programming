#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	/* initialize count to zero */
	size_t count = 0;

	/* iterate through each node of the list */
	for (; h != NULL; h = h->next)
	{
		/* print length and string value of the current node */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		/* increment the count */
		count++;
	}

	/* return the total number of nodes printed */
	return (count);
}
