#include "main.h"
/**
 * *_strchr - print character if found or null
 * @s:  pointer to  string for search
 * @c: character to be searched for
 *
 * Return:(character)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
