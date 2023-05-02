#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: first node
 * @idx: new position
 * @n: value of the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t new_node, current_node, next_node;
	unsigned int d;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	for (d = 0; d < idx - 1 && current_node != NULL; d++)
		current_node = current_node->next;

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	next_node = current_node->next;
	current_node->next = new_node;
	new_node->next = next_node;

	return (new_node);
}
