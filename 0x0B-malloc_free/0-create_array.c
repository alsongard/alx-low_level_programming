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
	int j, i;

	for (; c < size ; c++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
