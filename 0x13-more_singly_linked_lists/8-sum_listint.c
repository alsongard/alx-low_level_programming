#include "lists.h"
/**
 * sum_listint - find sum of data in listint
 * @head: pointer to the first header
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
