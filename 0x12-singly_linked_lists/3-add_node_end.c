#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node; /* declare a pointer to the nodes */
	int len = 0; /* initialize length to zero */

/* allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

/* copy the string to the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		free(new_node);
		return (NULL);

/* compute the length of the string */
	while (str[len] != '\0')
		len++;

/* store the length and set the next pointer to NULL */
	new_node->len = len;
	new_node->next = NULL;

/* if the list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
/* otherwise, find the last node and set its next pointer to the new node */
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

/* return the address of the new node */
	return (new_node);
}
