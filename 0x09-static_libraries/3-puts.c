#include "main.h"
/**
 * _puts - function that prints strings
 * @str:  pointer to the string
 * Return: String and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

