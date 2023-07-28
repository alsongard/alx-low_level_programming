#include "main.h"
/**
 * reverse_array - print integers in reverse
 * @a:  pointer to the array
 * @n: integer to be used for comparison
 *
 * Return: (void)
 */

void reverse_array(int *a, int n)
{
	int count, temp;

	count = 0;
	n = n-1;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}


}
