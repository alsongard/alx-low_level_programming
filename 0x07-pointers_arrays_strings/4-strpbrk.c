#include "main.h"
/**
 * *_strpbrk - search and print occurences
 * @s: character to be searched
 * @accept: string to be used
 * Return:  (Character)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
