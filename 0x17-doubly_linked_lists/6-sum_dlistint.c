#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: pointer to the head node
 * Return: sum of all elements or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
