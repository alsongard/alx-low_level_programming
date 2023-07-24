#include "main.h"
/**
 * swap_int -  function that will change the values
 * @a:  integer number 1
 * @b:  integer number 2
 *
 * Description - the function will swap values
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;

}
