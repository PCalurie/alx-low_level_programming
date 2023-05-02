#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointer to head of list, or NULL if index is out of range
 */
listint_t *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (*head);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (NULL);

	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (*head);
}
