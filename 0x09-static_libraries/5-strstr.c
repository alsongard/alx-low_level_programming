#include "main.h"
/**
 * *_strstr - search for str and print
 * @haystack: string to be searched
 * @needle: string for searching
 *
 * Return: (character)
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
