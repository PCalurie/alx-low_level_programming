#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the first node of the list
 * @str: string to be added as the value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	size_t len = 0;

/* allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

/* duplicate the string to be added as the value of the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		free(new_node);
			return (NULL);

/* calculate the length of the string */
	while (str[len] != '\0')
		len++;

/* set the length and next fields of the new node */
	new_node->len = len;
	new_node->next = NULL;

/* add the new node at the end of the list */
	if (*head == NULL)
	{
/* if the list is empty, make the new node the first */
		*head = new_node;
	}
	else
	{
/* otherwise, find the last node and add the new node after it */
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

/* return the address of the new node */
	return (new_node);
}
