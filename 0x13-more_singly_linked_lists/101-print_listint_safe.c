#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of nodes in linked lists
 * @head: pointer to first element
 * Return: print lists or 0 if fails
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *start, last;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	start = head->next;
	last = (head->next)->next;
	while (last)
	{
		if (start == last)
		{
			start = last;
			while (start != last)
			{
				nodes++;
				start = start->next;
				last = last->next;
			}
			start = start->next;
			while (start != last)
			{
				nodes++;
				start = start->next;
			}
			return (nodes);
		}
		start = start->next;
		last = (last->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - print linked lists
 * @head: pointer to first element
 * Return: number of nodes of lists
 */
{
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	node = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL ; nodes++)
		{
			printf("[%p]%d\n", (void*)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0 ; index < nodes ; index++)
		{
			printf("[%p]%d\n", (void*)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void*)head, head->n);
	}
	return (nodes);
}
