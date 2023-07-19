#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * @n: value to be taken
 * Return: (LastDigit)
 */

int print_last_digit(int n)
{
	int lastDgt;

	lastDgt = n % 10;
	if (lastDgt < 0)
	{
		lastDgt =  lastDgt * -1;
	}
	_putchar(lastDgt + '0');
	return (lastDgt);
}
