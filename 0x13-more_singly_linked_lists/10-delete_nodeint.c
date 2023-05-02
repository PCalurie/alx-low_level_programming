#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index 
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		subsequent = *head;
		*head = subsequent->next;
		free(subsequent);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);

	return (1);
}
