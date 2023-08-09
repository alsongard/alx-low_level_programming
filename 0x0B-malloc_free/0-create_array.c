#include "main.h"
#include <stdlib.h>
/**
 * *create_array - used to create an array of char
 * @c: the data to be printed
 * @size: the number of char to be printed
 * Return: characters
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		str[i] = c;
	}
	return (str);
}
