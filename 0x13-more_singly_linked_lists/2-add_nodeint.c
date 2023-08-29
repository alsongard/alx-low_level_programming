#include "lists.h"
/**
 * add_nodeint - add new node to the beginning of linked lists
 * @head: pointer to first node in lists
 * @n: data to insert that new node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
