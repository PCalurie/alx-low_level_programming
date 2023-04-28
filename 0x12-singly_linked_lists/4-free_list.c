#include "lists.h"
#include <stddef>
#include <stdlib.h>
/**
 * free_list - function frees a list
 * @head: header node
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->string);
	free(head);
}
