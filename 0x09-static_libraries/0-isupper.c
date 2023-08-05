#include "main.h"
/**
 * _isupper - Function checks for uppercase characters
 * @c: the character to be compared
 * Description -checks for uppercase characters
 * Return: Return 1 if uppercase otherwise  return 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
