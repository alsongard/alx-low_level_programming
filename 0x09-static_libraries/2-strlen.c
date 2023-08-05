#include "main.h"
/**
 * _strlen - print out length of characters
 * @s: the pointer that is assigned the string
 *
 * Description: print the length of characters
 * Return: 0 (Zero)
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
	{
		string_length++;
	}
	return (string_length);
}
