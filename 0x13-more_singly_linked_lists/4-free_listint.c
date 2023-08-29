#include "lists.h"
/**
 * free_listint - free linked lists mem
 * @head: listint_t list to be frees
 * Return: (void)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
