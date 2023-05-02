#include "lists.h"
/**
 * get_nodeint_at_index - prints the nth node of a list
 * @head: head node
 * @index: index node of the list
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n < index && head != NULL; n++)
		head = head->next;

	return (head);
}
