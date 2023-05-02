#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *new;

	new = head;
	while (new != NULL)
	{
		current = new->next;
		free(new);
		new = current;
	}
}
