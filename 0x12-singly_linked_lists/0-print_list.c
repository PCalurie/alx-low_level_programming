#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	/* initialize count to zero */
	size_t count = 0;
	const list_t *c_node = h
	/* iterate through each node of the list */
	for (; c_node != NULL; c_node = c_node->next)
	{
		/* print length and string value of the current node */
		if (c_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c_node->len, c_node->str);

		/* increment the count */
		count++;
	}

	/* return the total number of nodes printed */
	return (count);
}
