#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural squareroot of an int
 * @n: integer to calculta squareroot
 * Return: (integer)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the squeare toot
 * @i: iterate number
 *
 * Return: the natural square toot
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (I);
	}
	return (_sqrt(n, i + 1));
}

