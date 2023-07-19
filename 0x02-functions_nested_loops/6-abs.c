#include "main.h"
/**
 * _abs - Check absolute number of int
 *
 * @c:  integer to be compared
 * Return:0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = (c * -1);
		return (abs_val);
	}
	return (c);
}
