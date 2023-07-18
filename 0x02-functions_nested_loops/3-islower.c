#include "main.h"
/**
 * _islower - check for  lowercase
 *
 *@c - character to be checked
 * Description - Chek for lower case
 * Return: (0) or (1)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
