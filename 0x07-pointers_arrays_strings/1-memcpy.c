#include "main.h"
/**
 * *_memcpy -  copy data from src to dest
 * @src:  pointer to variable for source data
 * @dest:  pointer to variable for dest data
 * @n: integr to be used for limit
 *
 * Return: (Character)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
