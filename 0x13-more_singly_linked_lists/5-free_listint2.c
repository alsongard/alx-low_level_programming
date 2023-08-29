#include "lists.h"
/**
 * free_listint2 - free linked list mem
 * @head: pointer to the listint_t
 * Return: (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
