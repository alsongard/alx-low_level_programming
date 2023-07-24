#include "main.h"
/**
 * puts_half - print half of the second part of string
 * @str: pointer that is used to refer to string
 *
 * Return: (void)
 */

void puts_half(char *str)
{
	int length, second;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	second = length / 2;

	if (length % 2 == 1)
	{
		second++;
	}
	while (second < length)
	{
		_putchar(str[second]);
		second++;
	}
	_putchar('\n');

}
