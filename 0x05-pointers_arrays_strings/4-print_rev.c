#include "main.h"
/**
 * print_rev - print string in reverse
 * @s:  pointer to the string
 *
 * Return: (void)
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
	{
		start++;
	}
	while (start--)
	{
		_putchar(s[start]);
	}
	_putchar('\n');

}
