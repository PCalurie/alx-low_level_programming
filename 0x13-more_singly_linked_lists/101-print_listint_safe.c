#include"lists.h"

/**
*find_loop_start - findsaloopinalinkedlist
*@list: linkedlisttosearch
*Return: address of node where loop starts/returns,NULL if no loop
*/
listint_t *find_loop_start(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = list;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}

/**
*print_listint_safe - printsalinkedlist,evenifithasaloop.
*@head: head of list to print
*Return: number of node sprinted
*/
size_tprint_listint_safe(const listint_t *head)
{
	size_tcount = 0;
	listint_t *loop_node = find_loop_start((listint_t *)head);
	constlistint_t *current = head;

	while (current && (current != loop_node || count == 0))
	{
		printf("[%p]%d\n", (void *) current, current->n);
		current = current->next;
		count++;
	}
	if (loop_node)
		printf("->[%p]%d\n", (void *) loop_node, loop_node->n);

	return (count);
}
