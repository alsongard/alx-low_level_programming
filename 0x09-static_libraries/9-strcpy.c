#include "main.h"
/**
 * _strcpy - copy string from src to dest
 * @src: pointer to source string
 * @dest: pointer to destination string
 * description: copy string from source to dest
 * Return: (char)
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
