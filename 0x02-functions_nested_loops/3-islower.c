#include "main.h"
/**
 * int _islower(int c) - check whether char ar lowercase
 *
 * Description - Chek for lower case
 * Return: (0) or (1)
 */

int _islower(int c)
{
	char let;
	for ( let = 'a' ; let <= 'z' ; let++)
	{
		putchar(let);
	}
	if (c = let)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
