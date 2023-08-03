#include "main.h"
/**
 * _strlen_recursion - print length of string
 * @s: pointer ot string
 * Return: (void)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
