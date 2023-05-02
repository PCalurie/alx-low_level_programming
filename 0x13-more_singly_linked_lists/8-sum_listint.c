#include "lists.h"
/**
 * sum_listint - prints the sum of all the data in a list
 * @head: header node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
