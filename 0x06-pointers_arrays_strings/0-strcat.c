#include "main.h"
/**
 * _strcat - copy string and append
 * @dest: pointer to character to be added text
 * @src: pointer to var charcater for text to copy
 *
 * Return: (Character)
 */

char *_strcat(char *dest, char *src)
{
	int z,  length;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (z = 0 ; src[z] != '\0' ;  z++, length++)
	{
		dest[length] = src[z];
	}
	dest[length] = '\0';
	return (dest);
}
