#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head pointer
 * @n: node value
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Allocate memory for the new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	/* Check if memory allocation was successful */
	if (!new_node)
	{
		return (NULL);
	}

	/* Set the value of the new node */
	new_node->n = n;

	/* Set the previous pointer of the new node to NULL */
	new_node->prev = NULL;

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Update the previous pointer of the current head if it exists */
	if (*head)
	{
		(*head)->prev = new_node;
	}

	/* Update the head pointer to point to the new node */
	*head = new_node;

	/* Return the new node */
	return (new_node);
}
