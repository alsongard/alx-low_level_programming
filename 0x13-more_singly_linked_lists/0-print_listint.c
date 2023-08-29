#include "lists.h"
/**
 * print_listint - print all elements of linked lists
 * @h: linked list of type to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
