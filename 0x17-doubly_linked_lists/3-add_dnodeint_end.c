#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head pointer
 * @n: node value
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;

	/* Create a new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (!*head || !new_node)
	{
		return (NULL);
	}

	/* Set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	/* Traverse the list to the last node */
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* Link the new node at the end */
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
