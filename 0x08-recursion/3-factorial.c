#include "main.h"
/**
 * factorial - find the factorial of int n
 * @n: number to be used
 *
 * Return: (integer)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
