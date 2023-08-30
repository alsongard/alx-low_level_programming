#include "lists.h"
/**
 * pop_listint - delete heads note and return data
 * @head: double pointer to first element
 *
 * Return: an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
