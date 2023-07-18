#include "main.h"
/**
 * _isalpha - check for alphabetic character
 *
 * @c: character to be checked
 * Description - check alphabetic characters
 * Return: 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 69 && c <= 90)  || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
