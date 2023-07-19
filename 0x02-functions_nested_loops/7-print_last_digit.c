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
	_putchar(lastDgt);
	return (lastDgt);
}
