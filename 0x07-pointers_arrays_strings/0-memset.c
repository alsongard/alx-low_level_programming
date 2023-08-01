#include "main.h"
/**
 * *_memset - fills memory with constant data
 * @s:  pointer to address varaible
 * @n:  number of times to copy
 * @b:  character to be copied
 *
 * Return: (character)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
