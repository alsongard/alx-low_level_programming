#include "main.h"
/**
 * positive_or_negative - checks if number is positive, negative or zero
 * @i: Integer to be used for comparison
 *
 * description - checks  a number if positive,negative or zero
 * Return: (void)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is postive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is zero", i);
	}

}
