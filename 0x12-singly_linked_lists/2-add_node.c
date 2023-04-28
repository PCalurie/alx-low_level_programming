#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node - adds two nodes
 * @head: pointer to the head
 * @str: pointer to string
 * Return: address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

/* allocate memory for the new node's string and copy the value */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

/* calculate the length of the string */
	new_node->len = strlen(str);

/* set the new node's next pointer to the current head of the list */
	new_node->next = *head;

/* set the head of the list to the new node */
	*head = new_node;

/* return the address of the new node */
	return (new_node);
}
