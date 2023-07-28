#include "main.h"
/**
 * *_strncat - copy string from src to dest
 * @dest: string to added string
 * @src: string to be copied
 * @n: integre to besued for copying n char
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, z;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (z = 0; z < n  && src[z] != '\0' ;  z++, length++)
	{
		dest[length] = src[z];
	}
	dest[length] = '\0';
	return (dest);

}
