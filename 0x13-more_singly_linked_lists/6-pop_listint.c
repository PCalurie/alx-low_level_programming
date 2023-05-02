#include "lists.h"
/**
 * pop_listint - deletes a header node
 * @head: head of the list
 * Return: header's data
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *current, *new;

	if (head == NULL || *head == NULL)
		return (0);

	new = current = *head;

	if (*head)
	{
		d = current->n;
		*head = current->next;
		free(new);
	}
	else
		d = 0;
	return (d);
}
