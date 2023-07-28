#include "main.h"
/**
 * *_strncpy - copy string from src to dest
 * @dest: string to be appended or added
 * @src: string that is to be copied
 * @n: interger to be used for copying
 *
 * Return: (charcater)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0 ; length < n && src[length] != '\0' ; length++)
	{
		dest[length] =  src[length];
	}
	for (;  length < n ;  length++)
	dest[length] = '\0';
	return (dest);
}
