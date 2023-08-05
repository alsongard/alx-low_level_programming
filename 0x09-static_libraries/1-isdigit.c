#include "main.h"
/**
 * _isdigit - checks number between 0 and 9
 * @c: the number to be compared
 * Description:compare the number if between 0 and 9
 * Return: return 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
