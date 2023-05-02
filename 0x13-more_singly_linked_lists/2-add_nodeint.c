#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of the list
 * @head: pointer to the current node
 * @n: data in new node
 * Return: adress to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
