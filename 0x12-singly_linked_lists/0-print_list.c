#include "liss.h"
#include <stdio.h>
/**
 * print_list - print all elements of a linked lists
 * @h: pointer to the list_t list to print
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->sr)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
