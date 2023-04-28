#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - creates a new node and initializes it with the given string
 * @str: string to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
list_t *create_node(const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
