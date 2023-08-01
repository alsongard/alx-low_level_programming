#include "main.h"
/**
 * *_strspn - check for char c in string
 * @accept: string to be checked
 * @s: charcater to be checked
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{

			}
		}
		s++;
	}

	return (bytes);
}
