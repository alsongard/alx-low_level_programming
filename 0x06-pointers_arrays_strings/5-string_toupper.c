#include "main.h"
/**
 * *string_toupper - change lowercase to uppercase
 * @x: pointer to the sring address
 *
 * Return: (char)
 */

char *string_toupper(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
