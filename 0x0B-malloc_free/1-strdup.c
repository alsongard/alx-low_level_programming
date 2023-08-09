#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string from str to mew
 * @str: string to be copied
 * Return: (character)
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; str[a] ; a++)
	{
		ptr[a] = str[a];
	}
	return (ptr);
}
