#include "lists.h"
/**
 * insert_nodeint_at_index - insert data at the given index in the linked lists
 * @head: double pointer to the first element
 * @idx: index in the lists for data to insert
 * @n: data to be added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		reurn (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0 ; temp && i < idx ; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp-next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
