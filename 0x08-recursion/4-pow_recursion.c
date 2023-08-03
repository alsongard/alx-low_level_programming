#include "main.h"
/**
 * _pow_recursion - print the power of int x
 * @y:  integer used to set power
 * @x:  integer to be raised to power
 * Return: (integer)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
