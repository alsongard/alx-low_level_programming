#include <stdio.h>

/**
 * print_array - print the values of array
 * @a: pointer refering to the array address
 * @n: integer to be used
 *
 * Return: (void)
 */

void print_array(int *a, int n)
{
	int result;

	for (result = 0 ; result < n ; result++)
	{
		printf("%d", a[result]);
		if (result != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
