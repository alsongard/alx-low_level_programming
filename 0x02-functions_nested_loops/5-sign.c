#include "main.h"
/**
 * print_sign - check int  if positive,negative,zero
 *
 * @n: number to be checked
 * Return: (0) if n is 0, (-1) if n is -, (+) if n is +
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
