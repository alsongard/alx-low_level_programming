#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the beginning of the linked lists
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: temp
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

