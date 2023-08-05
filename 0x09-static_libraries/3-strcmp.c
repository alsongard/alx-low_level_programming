#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string one to be compared
 * @s2: string 2 to be compared
 *
 * Return: (integer)
 */

int _strcmp(char *s1, char *s2)
{
	int length,  result;

	length = 0;
	while (s1[length] == s2[length]  && s1[length] != '\0')
	{
		length++;
	}
	result = s1[length] - s2[length];
	return (result);
}
